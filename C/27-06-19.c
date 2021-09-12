/*
input : 10 20 18 7
inuput2: 25
output: 18 7 
definition: (18+7==25)
-------------------------
In Python:
n = input().split(" ")
add = int(input())
for i in range(len(n)):
    for j in range(i+1,len(n)):
        if int(n[i])+int(n[j]) == add:
            print(n[i]+" "+n[j])
*/




#include<stdio.h>
int main(){
    int num[100],i=0,sum=0;
    char ch;
    while(scanf("%d%c",&num[i],&ch)>0){
        i++;
        if(ch=='\n'){
            break;
        }
    }
    scanf("%d",&sum);
    for(int j=0;j<i;j++){
        for(int k=j+1;k<i;k++){
            if(num[j]+num[k]==sum){
                printf("%d %d\n",num[j],num[k]);
            }
        }
    }
    return 0;
}