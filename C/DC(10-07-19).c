/*
Input: 1234
output: 2 12 //1*2=2 and 3*4=12

input: 12145
output: 2 4 5 //1*2=2 and 1*4=4 and remaining 5 will be printed
*/

#include<stdio.h>
#include <stdlib.h>

int main()
{
char ch;
unsigned long long int prod=1,val=-1;
while(scanf("%c",&ch)>0){
    if(ch=='\n'){
        break;
    }
   if(val==-1){
       val = ch-'0';
   }else{
       val = val* (ch-'0');
       printf("%lld ",val);
       val=-1;
   }
}
if(val!=-1){
    printf("%lld",val);
}
return 0;
}