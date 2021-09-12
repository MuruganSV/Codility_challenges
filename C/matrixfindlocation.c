
#include <stdio.h>

int main()
{
   char a[101],b[20];
   int len,row,col,k=0,count=0,blen,z=0,starti=0,startj=0,endi=0,endj=0,temp;
   scanf("%s%n",a,&len);
   scanf("%s%n",b,&blen);
   blen = blen-1;
   temp = blen;
   int v = sqrt(len);
  if(v*v == len){
      row = v;
      col = v;
  }else{
      len++;
        v = sqrt(len);
      while(v*v != len){
                
          len++;
            v = sqrt(len);
      }
  }
   row = v;
   col = v;
   char arr[row][col];
   for(int i=0;i<row;i++){
       for(int j=0;j<col;j++){
           arr[i][j] = a[k];
           k++;
       }
   }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++){
            if(arr[i][j]==b[z]){
               
                z++;
                count++;
             while(temp > 1) {
                 if(arr[i][j+z]==b[z]){
                     
                     endi = i;
                     endj = j+z;
                      count++;
                     
                      z++;
                 }else{
                     z = 0;
                     count = 0;
                     break;
                 }
                 temp--;
             } 
             if(count == blen){
                 starti = i;
                 startj = j;
                 printf("start at <%d,%d>\n",starti,startj);
                 printf("End at <%d,%d>",endi,endj);
                 return 0;
             }else{
                 
                 temp = blen;
                 count = 0;
                 z = 0;
                 endi =0;
                 endj = 0;
                 starti =0;
                 startj = 0;
             }
            }
             if(arr[i][j]==b[z]){
                z++;
                count++;
             while(temp > 1) {
                 if(arr[i+z][j]==b[z]){
                     endi = i+z;
                     endj = j;
                      count++;
                      z++;
                 }else{
                     z = 0;
                     count = 0;
                     break;
                 }
                 temp--;
             } 
             if(count == blen){
                 starti = i;
                 startj = j;
                 printf("start at <%d,%d>\n",starti,startj);
                 printf("End at <%d,%d>",endi,endj);
                return 0;
             }else{
                 temp = blen;
                 count = 0;
                 z = 0;
                 endi =0;
                 endj = 0;
                 starti =0;
                 startj = 0;
             }
            }
        }
        printf("\n");
    }
    printf("Not found!!!");
    return 0;
}
