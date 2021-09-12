#include<stdio.h>
#include <stdlib.h>

int main()
{
char a[201],b[100][100],k=0;
int len,c;
scanf("%s%n",a,&len);
scanf("%d",&c);
for(int i=0;i<len/c;i++){
    if((i+1)%2!=0){
       for(int j=0;j<c;j++){
           b[i][j] = a[k];
           k++;
       } 
    }else{
        for(int j=c-1;j>=0;j--){
            b[i][j]=a[k];
            k++;
        }
    }
    
}
for(int j=0;j<c;j++){
    for(int i=0;i<len/c;i++){
        printf("%c",b[i][j]);
    }
}
return 0;
}