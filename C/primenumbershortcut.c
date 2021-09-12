#include <stdio.h>

int main()
{
    
    unsigned long long int num,count=0,size=0;
    scanf("%lld",&num);
    size = sqrt(num);
    int arr[size],k=0;
    for(int i=2;i<=size;i++){
      for(int j=1;j<=i;j++){
          if(i%j==0){
              count++;
              if(count>2){
                  break;
              }
          }
      }
      if(count<=2){
          printf("%d ",i);
          arr[k]=i;
          k++;
      }
      count =0;
    }
    count=0;
    for(int i=arr[k-1]+1;i<=num;i++){
        for(int j=0;j<k;j++){
            if(i%arr[j]==0){
                count = 1;
                break;
            }
        }
        if(count == 0){
            printf("%d ",i);
        }
        count=0;
    }
    return 0;
}

// normal method
//  #include <stdio.h>

// int main()
// {
    
//     unsigned long long int num,count=0,size=0;
//     scanf("%lld",&num);
//     for(int i=2;i<=num;i++){
//       for(int j=1;j<=i;j++){
//           if(i%j==0){
//               count++;
//               if(count>2){
//                   break;
//               }
//           }
//       }
//       if(count<=2){
//           printf("%d ",i);
//       }
//       count =0;
//     }
//     return 0;
// }
