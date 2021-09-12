/*
codevita 2019 string reverse and find the substring present in the string or not
*/
#include <stdio.h>

int main()
{
   char a[101],b[101],ch[20],temp,d;
   int len,n,val,k=0,z=0,count=0,i=0,v=0;
   scanf("%s%n",a,&len);
   scanf("%d",&n);
   strcpy(b,a);
   char c[n];
   for(i=0;i<n;i++){
       scanf("%s%d",ch,&val);
        if(ch[0] == 'L' || ch[0] == 'l'){
          v = val;
          while(v > 0){
              temp = a[0];
              for(int j=1;j<len;j++){
                  a[j-1] = a[j];
              }
              a[len-1] = temp;
              v--;
          }
          c[k] = a[0];
             k++;
      }else if(ch[0]=='R' || ch[0] =='r'){
          v = val;
          while(v > 0){
              temp = a[len-1];
              for(int j=len-2;j>=0;j--){
                  a[j+1] = a[j];
              }
              a[0] = temp;
              v--;
          }
          c[k] = a[0];
         k++;
      }
       
   }
  c[k]='\0';
  int s1 = strlen(c);
  int s2 = s1;
  for(int j=0;j<len;j++){
      if(c[z]==b[j]){
          s2--;
          count++;
          z++;
          while(s2>0){
              if(c[z]==b[j+z]){
                  z++;
                  count++;
              }else{
                  break;
              }
              s2--;
          }
          if(count == s1){
              printf("yes");
              return 0;
          }else{
              s2 = s1;
              count = 0;
              z = 0;
          }
      }
  }
printf("no");
    return 0;
}
