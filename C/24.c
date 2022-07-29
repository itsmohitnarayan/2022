#include<stdio.h>
int main()
{
  int n;
   printf("\nEnter the value:");
   scanf("%d",&n);
   while (n%2==0)
   {
    printf("Even!");
    return 0;
   }
   printf("Odd!");
   return 0;
}