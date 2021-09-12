
#include <stdio.h>
void recurse(){
    char a[200],ch;
    scanf("%s%c",a,&ch);
    if(ch==' '){
        recurse();
    }
     printf("%s ",a);
}

int main()
{
    recurse();
    return 0;
}
