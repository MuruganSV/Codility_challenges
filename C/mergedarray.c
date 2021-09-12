
#include <stdio.h>

int main()
{
    int arr[101],arr2[101],arr3[101],i=0,j=0,k=0;
    char ch;
    while(scanf("%d%c",&arr[i],&ch)>0){
         i++;
        if(ch == '\n'){
            break;
        }
        
    }
    while(scanf("%d%c",&arr2[j],&ch)>0){
        j++;
        if(ch=='\n'){
            break;
        }
        
    }
	int s1 = i; 
	int s2 = j;
	i=0;j=0;
	while(i < s1 && j<s2){
	    if(arr[i]<arr2[j]){
	        arr3[k]= arr[i];
	        i++;k++;
	    }else if(arr[i]>arr2[j]){
	        arr3[k]=arr2[j];
	        j++;k++;
	    }else if(arr[i]==arr2[j]){
	        arr3[k] = arr2[j];
	        i++;k++;j++;
	    }
	}
	while(i<s1){
	    arr3[k]=arr[i];
	    k++;i++;
	}
	while(j<s2){
	    arr3[k]=arr2[j];
	    j++;k++;
	}
	for(int z=0;z<k;z++){
	    if(z== k-1){
	       printf("%d",arr3[z]); 
	       return 0;
	    }
	    printf("%d,",arr3[z]);
	}
    return 0;
}
