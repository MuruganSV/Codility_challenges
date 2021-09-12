
#include <stdio.h>
#include <stdbool.h>
bool nonDecreasing(int* arr){
    int count =0;
    for(int i=0;i<3;i++){
        for(int j=i+1;j<3;j++){
            if(arr[i]>arr[j]){
                count++;
                arr[i]=arr[j]-1;
            }
            if(count>1){
                return false;
            }
        }
    }
    return true;
}

int main()
{
    int arr[3]={10,5,1};
    printf((nonDecreasing(arr)==true)?"true":"false");
    return 0;
}
