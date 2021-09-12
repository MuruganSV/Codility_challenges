/*
input : 5
output : 1 2 3 4 5
         2 * * * 4
         3 * * * 3
         4 * * * 2
         5 4 3 2 1
*/
#include <stdio.h>

int main()
{
    int num;
    scanf("%d",&num);
    for(int i=1;i<=num;i++){
        for(int j=1;j<=num;j++){
            if(i==1){
                printf("%d ",j);
            }else if(i==num){
                printf("%d ",num-(j-1));
            }else if(j==1){
                printf("%d ",i);
            }else if(j==num){
                printf("%d ",num-(i-1));
            }
            else{
                printf("* ");
            }
        }
        printf("\n");
    }

    return 0;
}
