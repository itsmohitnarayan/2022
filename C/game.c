// #include<stdio.h>

// void printBoard();
// int checkwin();
// void system();
// int result;
// int board[]={0,1,2,3,4,5,6,7,8,9};

// void main(){
//     int player=1,input,status=-1,i;
//     printBoard();


//     while(status==-1)
//     {
//         player=(player%2==0) ? 2 : 1;
//         char mark=(player==1) ?'x':'o';
//         printf("please enter number for player %d\n",player);
//  scanf("%d",&input);
//     if(input<1 || input>9){
//         printf("invalid input");
// }

//     board[input]=mark;
//     printBoard();
//     }
// player++;

// }
//  int result =checkwin;

// if(result==1){
//     printf("player %d is the winner",player);
// }
//     else if(result==0){
//         printf("draw");
//        return;
//     }

// void printBoard()
// {
//     system("cls");
// printf("\n\n");
// printf("play game tic tac toe\n\n");
// printf("   |   |   \n");
// printf("  %c  |  %c  |  %c  \n",board[1],board[2],board[3]);
// printf("_____|_____|_____\n");
// printf("   |   |   \n");
// printf("%c  |  %c  |  %c  \n",board[4],board[5],board[6]);
// printf("_____|_____|_____\n");
// printf("   |   |   \n");
// printf("%c  |  %c  |  %c  \n",board[7],board[8],board[9]);
// printf("____|____|____\n");
// printf("\n\n");

// }
// int checkwin()
// {
//     if(board[1]==board[2] && board[2]==board[3]){
//         return 1;
//     }
//     if(board[1]==board[4] && board[4]==board[7]){
//         return 1;
//     }
//         if(board[7]==board[8] && board[8]==board[9]){
//         return 1;
//         }
//         if(board[3]==board[6] && board[6]==board[9]){
//         return 1;
//         }
//         if(board[1]==board[5] && board[5]==board[9]){
//         return 1;
//         }
//         if(board[3]==board[5] && board[5]==board[7]){
//         return 1;
//         }
//         if(board[2]==board[5] && board[5]==board[8]){
//         return 1;
//         }
//         if(board[4]==board[5] && board[5]==board[6])
//         return 1;
//         }
//         int count =0;
//         for (int i=1;i<=9;i++)
//         {
//             if(board[i]=='x' || board[i]=='o'){
//                 count++;
//             }
//         }
//         if(count==9){
//             return 0;
//         }
//         else{
//         return -1;

//         }

#include <stdio.h>
#include <stdlib.h>

void printBoard();
int checkwin();
int isBoardFull();
void systemClear();

char board[] = {' ', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

int main() {
    int player = 1, input, status = -1;

    printBoard();

    while (status == -1) {
        player = (player % 2 == 0) ? 2 : 1;
        char mark = (player == 1) ? 'X' : 'O';

        printf("Please enter a number for player %d: ", player);
        scanf("%d", &input);

        if (input < 1 || input > 9) {
            printf("Invalid input\n");
            continue;
        }

        if (board[input] == 'X' || board[input] == 'O') {
            printf("Cell already occupied\n");
            continue;
        }

        board[input] = mark;
        printBoard();

        status = checkwin();
    }

    if (status == 1) {
        printf("Player %d is the winner\n", player);
    } else if (status == 0) {
        printf("It's a draw\n");
    }

    return 0;
}

void printBoard() {
    systemClear();
    printf("\n");
    printf("Tic Tac Toe\n\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n", board[1], board[2], board[3]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n", board[4], board[5], board[6]);
    printf("___|___|___\n");
    printf("   |   |   \n");
    printf(" %c | %c | %c \n", board[7], board[8], board[9]);
    printf("   |   |   \n");
    printf("\n");
}

int checkwin() {
    if (board[1] == board[2] && board[2] == board[3]) {
        return 1;
    }
    if (board[4] == board[5] && board[5] == board[6]) {
        return 1;
    }
    if (board[7] == board[8] && board[8] == board[9]) {
        return 1;
    }
    if (board[1] == board[4] && board[4] == board[7]) {
        return 1;
    }
    if (board[2] == board[5] && board[5] == board[8]) {
        return 1;
    }
    if (board[3] == board[6] && board[6] == board[9]) {
        return 1;
    }
    if (board[1] == board[5] && board[5] == board[9]) {
        return 1;
    }
    if (board[3] == board[5] && board[5] == board[7]) {
        return 1;
    }
    if (isBoardFull()) {
        return 0;
    }
    return -1;
}

int isBoardFull() {
    for (int i = 1; i <= 9; i++) {
        if (board[i] != 'X' && board[i] != 'O') {
            return 0;
        }
    }
    return 1;
}

void systemClear() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}
