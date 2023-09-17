// #include <windows.h>

// void setColor(int color) {
//     SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
// }

// int main() {
//     // You can use the following constants for different colors:
//     // 0: Black, 1: Blue, 2: Green, 3: Cyan, 4: Red, 5: Magenta, 6: Yellow, 7: White
//     // Example: setColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
    
//     setColor(FOREGROUND_BLUE | FOREGROUND_GREEN); // Change text color to cyan (blue + green)
//     printf("This text is in cyan color on Windows.\n");

//     setColor(FOREGROUND_RED | FOREGROUND_INTENSITY); // Change text color to bright red
//     printf("This text is in bright red color on Windows.\n");

//     // Reset text color to default (white)
//     setColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
//     printf("This text is back to default color on Windows.\n");

//     return 0;
// }
#include<stdio.h>
#include<conio.h>
#include<direct.h>
#include<windows.h>

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}


int main (){
    int n;

    setColor(FOREGROUND_BLUE | FOREGROUND_GREEN);
    printf("enter the value of n \n");
    scanf("%d", &n);

    setColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
    for(int i=1; i<=n; i++){
        for(int j=1; j<n; j++){
            // setColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
            printf(" ");
        }
        
        for (int k=1; k<=n; k++){
            
            printf("\3");
            setColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
        }
        
        printf("\n");
        setColor(FOREGROUND_BLUE | FOREGROUND_GREEN);
    }
getch();
}
