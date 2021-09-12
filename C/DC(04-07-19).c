/*
input: 3
output: 1 2 3 2 1
        * 2 3 2
        * * 3
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
int n,stop=0,p=0;
scanf("%d",&n);
stop = n + (n-1);
for(int i=1;i<=n;i++){
    p = i-1;
    for(int j=1;j<=stop;j++){
        if(j<=n && j>=p+1){
            p++;
           printf("%d ",p);
        }else if(j>=p+1){
           p--;
           printf("%d ",p);
        }else{
            printf("* ");
        }
    }
    printf("\n");
    stop--;
}
return 0;
}