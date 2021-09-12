/*
print the matrix which has the maxium number of vowels in it
if both matrix having same number of vowels then print matrix A

input :
3
Q K e
v B a
U I T
i Y u
t z o
w a E
output:
i Y u
t z o
w a E
___________________________________________________________________
in Python:
#Your code below
num = int(input())
acount=0
bcount=0
k=0
a=[]
vowels = ['a','e','i','o','u','A','E','I','O','U']
for i in range(num*2):
    value = input().split(" ")
    for j in range(len(value)):
        a.append(value[j])
        if i<num:
            if value[j] in vowels:
                acount+=1
        elif i>=num:
            if value[j] in vowels:
                bcount+=1
k=0
if acount>bcount or acount==bcount:
    for i in range(num):
        for j in range(num):
            print(a[k],end=" ")
            k+=1
        print()
else:
    k=num*num
    for i in range(num):
        for j in range(num):
            print(a[k],end=" ")
            k+=1
        print()
*/


#include<stdio.h>
#include <stdlib.h>
int isvowel(char ch){
    ch = tolower(ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
        return 1;
    }
    return 0;
}

int main()
{
int num,i=0,acount=0,bcount=0,k=0;
scanf("%d",&num);
char A[(num*num)*2],B[(num*num)*2];
while(scanf("%c",&A[i])>0){
    if(A[i]!=' '&&A[i]!='\n'){
    acount =acount+ isvowel(A[i]);
    }
    i++;
    if(i == (num*num)*2){
        break;
    }
}
i=0;
while(scanf("%c",&B[i])>0){
    if(B[i]!=' '&&B[i]!='\n'){
   bcount = bcount+ isvowel(B[i]); 
    }
   i++;
   if(i== (num*num)*2){
       break;
   }
}
if(acount>bcount || acount==bcount){
    for(int i=0;i<num;i++){
        for(int j=0;j<num;j++){
           printf("%c",A[k]);
           k++;
           printf("%c",A[k]);
           k++;
        }
    }
}else{
   for(int i=0;i<num;i++){
       for(int j=0;j<num;j++){
           printf("%c",B[k]);
           k++;
           printf("%c",B[k]);
           k++;
       }
   } 
}
}