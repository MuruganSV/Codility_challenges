
#include <stdio.h>

int main()
{
    int num,count=0,totalcount=0,lastcount=0;
    scanf("%d",&num);
    if(num%2==0){
        printf("Unable to Build");
        return 0;
    }
    for(int i=1;i<=num;i++){
        if(i==1){
            count ++;
            totalcount = totalcount+count;
            if(count > num){
                lastcount = lastcount + (count - num);
            }
        }else{
              count = count + 2;
              totalcount = totalcount+count;
              if(count > num){
                 lastcount = lastcount + (count-num);
              }
        }
    }
    printf("%d",lastcount);
    return 0;
}
