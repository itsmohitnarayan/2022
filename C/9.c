#include <stdio.h>
int main(){
    char ch;
    printf("ENter Character :");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Upper case\n");
    } else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lower Case\n");
    } else {
        printf("Not English letter\n");
    }
    return 0;
    
}