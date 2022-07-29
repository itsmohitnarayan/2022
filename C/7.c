#include <stdio.h>
int main(){
    int marks;
    printf("Enter Marks :");
    scanf("%d", &marks);

    // if (marks >= 30)
    // {
    //     printf("pass\n");
    // }else {
    //     printf("Fail\n");
    // }
    if (marks >= 0 && marks <= 30)
    {
        printf("Fail\n");
    } else if (marks > 30 && marks <=100)
    {
        printf("pass\n");
    } else {
        printf("Wrong Marks\n");
    }
    
    
    return 0;
}
