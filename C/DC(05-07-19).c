/*
input: #001AFF -> convert this into RGB format 00=0,1A=26,FF=255 that is hexadecimal to decimal
output: (0,26,255)

*/


#include <stdio.h>
void hextodec(char* v){
    int val=0,n,temp=0;
    int len = strlen(v);
    for(int i=0;i<=1;i++){
        n = (i==0)?1:16;
    switch(v[len-2-i]){
        case '0': val = val + 0;break;
        case '1': val = val + (1* n);break;
        case '2': val = val +(2*n); break;
        case '3': val = val+(3*n);break;
        case '4': val = val+(4*n);break;
        case '5': val = val+(5*n);break;
        case '6': val = val+(6*n);break;
        case '7': val = val+(7*n);break;
        case '8': val = val+(8*n);break;
        case '9': val = val+(9*n); break;
        case 'A': val = val+(10*n);break;
        case 'B': val = val+(11*n);break;
        case 'C': val = val+(12*n);break;
        case 'D': val = val+(13*n);break;
        case 'E': val = val+(14*n);break;
        default: val = val + (15*n);break;
    }
    
    }
    printf("%d",val);
    
}

int main()
{
    char a[20],b[2];
    int len,j=0;
    scanf("%s%n",a,&len);
    for(int i=1;i<len;i+=2){
        b[j]=a[i];
        j++;
        b[j]=a[i+1];
        if(i==1){
            printf("(");
        }
        hextodec(b);
        if(i!=len-2){
        printf(",");
        }
        j=0;
    }
    printf(")");
    return 0;
}
