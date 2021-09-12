#include<stdio.h>
#include <stdlib.h>

int main()
{
char a[201];
int len,count=0,e=1,temp=0,ic=0;
scanf("%s%n",a,&len);
for(int i=0;i<len;i++){
    for(int j=i+1;j<len;j++){
        e++;
        if(a[i]==a[j]){
            temp=i;
           if(e>=2){
               for(int k=j;k>=i;k--){
                   if(a[k]==a[temp]){
                     ic++;  
                   }
                   temp++;
               }
               if(ic == e){
                   count++;
               }
               ic =0;
           } 
        }
    }
    e=1;
}
printf("%d",count);
}