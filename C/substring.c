#include<stdio.h>
int main()
{
    char a[101],b[101];
    int len1,len2,count=0,index=0;
    scanf("%s%n",a,&len1);
    scanf("%s%n",b,&len2);
    for(int i=0;i<len1;i++)
    {
       if(a[i]==b[0])
       {
           count = count +1;
           index = i;
           for(int j=1;j<len2-1;j++){
               if(a[i+j] == b[j]){
                   count ++;
               }
           }
       }
       if(count == len2-1){
           printf("%d",index);
           return 0;
       }
       count = 0;
    }
    printf("-1");
    return 0;
}