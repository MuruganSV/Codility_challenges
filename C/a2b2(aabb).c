#include<stdio.h>
int main()
{
    char a[1001];
    int i=0,num[1000],count=0;
    while(scanf("%c",&a[i])>0){
        if(a[i] == '\n'){
            break;
        }
        scanf("%d",&num[i]);
        i++;
    }
    for(int j=0;j<i;j++){
        count = num[j];
        while(count>0){
            printf("%c",a[j]);
            count--;
        }
       
    }
    return 0;
}