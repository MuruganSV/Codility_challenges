#include <stdio.h>
int main(){
    char a,b[100],c[100];
    float val,max=0;
    int i=0;
    while(scanf("%c",&a)>0){
         if(a=='\n'){
            break;
        }
        if(a == '@'){
            scanf("%f",&val);
        }else if(a!=' '){
            b[i]=a;
            i++;
            b[i]='\0';
        }
        if(val>max){
            max = val;
            strcpy(c,b);
            i=0;
            b[i]='\0';
        }
       
    }
    printf("%s",c);
    return 0;
}


/*
for lowest mileage
#include <stdio.h>
int main(){
    char a,b[100],c[100];
    float val,max=1000000.00f;
    int i=0,flag=0;
    while(scanf("%c",&a)>0){
         if(a=='\n'){
            break;
        }
        if(a == '@'){
            scanf("%f",&val);
            flag=1;
        }else if(a!=' '){
            b[i]=a;
            i++;
            b[i]='\0';
        }
        if(flag==1 && val<max){
            flag=0;
            max = val;
            strcpy(c,b);
            i=0;
        }
       
    }
    printf("%s",c);
    return 0;
}

*/