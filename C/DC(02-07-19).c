#include<stdio.h>
#include <stdlib.h>

int main()
{
int num,temp=0,z=0,evc=0,count=0;
scanf("%d",&num);
int arr[num],t[100],k=0,var=0,ocr=-1;
for(int i=0;i<num;i++){
    scanf("%d",&arr[i]);
}
for(int i=0;i<num;i++){
    temp=arr[i];
    while(temp>0){
        t[k]=temp%10;
        if(t[k]%2==0){
            evc++;
        }
        k++;
        temp =temp/10;
    }
    for(int j=k-1;j>=0;j--){
        if((t[j]%2==0 && ocr != j)&&(count+1!=evc)){
            count++;
           for(int y=j-1;y>=0;y--){
               if(t[y]%2==0){
                   var = t[j];
                   t[j] = t[y];
                   t[y] = var;
                   ocr = y;
                   z = (z*10)+t[j];
                   break;
               }
           } 
        }else{
            if(t[j]%2==0){
                count++;
            }
            z = (z*10)+t[j];
        }
    }
    printf("%d",z);
    evc =0;
    z=0;
    count =0;
    printf("\n");
    k=0;
}
return 0;
}