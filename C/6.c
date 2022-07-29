#include<stdio.h>
// DO's of adult
int main(){
    int age;
    printf("Enter Age :");
    scanf("%d", &age);

if (age > 18)
    {
        printf("adult\n");
        printf("They can vote\n");
        printf("they can Drive");
    }
else if (age < 18)
{
    printf("Not adult\n");
}
return 0;

}