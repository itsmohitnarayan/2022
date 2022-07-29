#include<stdio.h>
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    int sum=0;
    for (int i = n; i >=1; i--)
    {
        printf("%d\n",i);
    }
    
    printf("sum is : %d", 1/sum);
    return 0;
}