/*
input: 1,2,3,4,5
output: 120 60 40 30 24            //2*3*4*5=120,3*4*5*1=60,..
explanation: print the product of all the other index values in array except current index value
------------------------------------------
In Python:
values = input().split(",")
prod = 1
for i in values:
    prod *= int(i)
for i in values:
    print(int(prod/int(i)),end=" ")
    
*/
#include <stdio.h>

int main()
{
   int num[100],product=1,i=0;
   char ch;
   while(scanf("%d%c",&num[i],&ch)>0){
       product=product*num[i];
       if(ch=='\n'){
           break;
       }
        i++;
        
   }
    for(int j=0;j<=i;j++){
        printf("%d ",product/num[j]);
    }
    return 0;
}
