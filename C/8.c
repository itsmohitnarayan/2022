#include <stdio.h>

int main(){
    int marks;
    printf("Enter your marks :");
    scanf("%d", &marks);

    if (marks < 30)
    {
        printf("c\n");
    } else if (marks >= 30 && marks <70)
    {
        printf("b\n");
    } else if (marks >= 70 && marks <70)
    {
        printf("A\n");
    }else {
        printf("A++\n");
    }
    return 0; 
}