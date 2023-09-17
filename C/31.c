#include <stdio.h>
#include <windows.h>

void setColor(int color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

int main(){

    int arr[50], n, i, y, temp;

    setColor(FOREGROUND_BLUE | FOREGROUND_GREEN);
    printf("Please Enter the Number of Elements you want in the array: ");
    scanf("%d", &n);

    setColor(FOREGROUND_RED | FOREGROUND_INTENSITY);
    printf("Please Enter the Value of Elements: ");

    for( i= 0; i < n; i++)

        scanf("%d", &arr[i]);

    for(i = 0; i < n - 1; i++){       
    
        for(y = 0; y < n - i - 1; y++){          

            if(arr[y] > arr[y + 1]){               

                temp = arr[y];

                arr[y] = arr[y + 1];

                arr[y + 1] = temp;

            }

        }

    }
    setColor(FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE);
    printf("Array after implementing bubble sort: ");

    for(i = 0; i < n; i++){

        printf("%d  ", arr[i]);

    }

    return 0;

}

// #include<stdio.h>

// int main(){
//     int n;
//     scanf("%d", &n);

// int arr[n];

//     for (int i = 0; i < n; i++)
//     {
//         scanf("%d", &arr[i]);
//     }

// int counter=1;
//     while (counter<n){
//         for (int i = 0; i < n-counter; i++)
//         {
//             if (arr[i]>arr[i+1])
//             {
//                 int temp =arr[i];
//                 arr[i]=arr[i+1];
//                 arr[i+1]=temp;
//             }
            
//         }
//         counter++;
//     }
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d", arr[i]);
//     }
  
// }