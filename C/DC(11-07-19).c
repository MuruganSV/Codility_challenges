/*
input : 4 25  //4 indicates the number of row and column and 25 is the value that are to be counted in column vise                                                     
11 25 21 25                                                 
14 25 17 26                                                 
25 36 15 25                                                 
25 10 18 15
output:                                                 
11 25 21 25                                                 
14 25 17 26                                                 
25 * 15 25  //for this column 1 contains two 25 i.e given vale so,the below values are marked as *                                                
25 * 18 *

mark the column value as * when column contains count>=2 of the given value.
*/


#include<stdio.h>
#include <stdlib.h>

int main()
{
int rc,num,count[128][128]={0};
scanf("%d%d",&rc,&num);
int arr[rc][rc];
for(int i=0;i<rc;i++){
    for(int j=0;j<rc;j++){
        scanf("%d",&arr[i][j]);
        }
}
for(int i=0;i<rc;i++){
    for(int j=0;j<rc;j++){
        if(count[j][j]>=2){
            printf("* ");
        }else{
            printf("%d ",arr[i][j]);
        }
        if(arr[i][j]==num){
            count[j][j]++;
        }
     
    }
    printf("\n");
}

return 0;
}
