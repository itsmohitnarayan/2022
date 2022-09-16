#include<stdio.h>
 
int fact(int n);
int main (){
    int a;
    printf("enter a number");
    scanf("%d",&a);

    printf("factorial is: %d", fact(a));
    return 0;
}

int fact (int n){
    if(n==0){
        return 1;
    }
int factnm1=fact(n-1);
int factn=factnm1*n;
return factn;
}
