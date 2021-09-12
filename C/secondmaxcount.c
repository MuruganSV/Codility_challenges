#include<stdio.h>
#include <stdlib.h>

int main()
{
int num,a[128]={0};
char ch;
scanf("%d",&num);
int arr[num],i=0,temp=0,max=0,maxindex=0,lastmax=0;
while(scanf("%d%c",&arr[i],&ch)>0){
    a[arr[i]]++;
    temp = i;
    while(temp>0){
        if(arr[i]==arr[temp-1]){
            i--;
        }
        temp --;
    }
    i++;
    if(ch == '\n'){
        break;
    }
}
for(int k=1;k<=2;k++){
for(int j=0;j<i;j++){
  if(a[arr[j]]>max && a[arr[j]]!=lastmax){
      max = a[arr[j]];
      maxindex = j;
  }
}
lastmax = max;
max = 0;
}
printf("%d",arr[maxindex]);
return 0;
}