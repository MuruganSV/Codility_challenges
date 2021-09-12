#include<stdio.h>
int main()
{
    char a[101];
    int len;
    scanf("%s%n",a,&len);
    for(int i=0;i<len;i++){
        for(int j=0;j<len;j++){
            if(j==i || i+j==len-1){
                printf("%c",a[j]);
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}