#include<stdio.h>
int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d", &n);

    int i=0; 
    while (i<=n) //By using While 
    {
        printf("%d\n",i);
        i++;
    }
    for (int i = 0; i <=n; i++) //By using for
    {
        printf("%d\n",i);
    }
    
    return 0;
}