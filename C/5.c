#include <stdio.h>
#include <math.h>
// Odd or even
int main(){
    int x;
    printf("Enter a Number : ");
    scanf("%d", &x);
    printf("%d", x%2 == 0);
    return 0;
}