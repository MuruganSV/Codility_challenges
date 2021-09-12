#include<stdio.h>
int main()
{
    int num[101],i=0,o=0,e=0,temp,f;
    char ch;
    while(scanf("%d%c",&num[i],&ch)>0){
        if(ch == '\n'){
            break;
        }
        i++;
    }
   int odd[20],even[20];
   for(int j=0;j<=i;j++){
       if((j+1) %2==0){
           even[e]=num[j];
           e++;
       }else{
           odd[o]=num[j];
           o++;
       }
   }
   for(int j=0;j<o;j++){
       for(int k=j+1;k<o;k++){
           if(odd[j]<odd[k]){
               temp = odd[k];
               odd[k] = odd[j];
               odd[j] = temp;
           }
       }
   }
   for(int j=0;j<e;j++){
       for(int k=j+1;k<e;k++){
           if(even[j]>even[k]){
               temp = even[k];
               even[k] = even[j];
               even[j] = temp;
           }
       }
   }
   if(e>o){
       f = e;
   }else{
       f = o;
   }
  for(int j=0;j<f;j++){
      printf("%d",odd[j]);
      if(j+1 != f){
          printf(",%d,",even[j]);
      }
  }
    return 0;
}