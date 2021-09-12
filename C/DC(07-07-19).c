/*
Input : 7    
Output:                                                               
------<0>                                                           
-----<123>                                                          
----<45678>                                                         
---<9012345>                                                        
--<678901234>                                                       
-<56789012345>                                                      
<6789012345678>                                                     
-<90123456789>                                                      
--<012345678>                                                       
---<9012345>                                                        
----<67890>                                                         
-----<123>                                                          
------<4>
*/
#include<stdio.h>
#include <stdlib.h>

int main()
{
int num,jstop=0,istop=0,print=0,ocr=0;
scanf("%d",&num);
istop = num + (num-1);
jstop = num + 2;
ocr=num;
for(int i=1;i<=istop;i++){
    for(int j=1;j<=jstop;j++){
        if(j==jstop){
            printf(">");
        }else if(j==ocr){
            printf("<");
        }else if(j<ocr){
            printf("-");
        }else{
            printf("%d",print);
            print++;
            if(print==10){
                print = 0;
            }
        }
    }
    printf("\n");
    if(i<num){
       jstop++; 
       ocr--;
    }else{
        jstop--;
        ocr++;
    }
}
return 0;
}