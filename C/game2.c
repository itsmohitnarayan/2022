#include <stdio.h>
#include <stdlib.h>

void printBoard();
int checkWin();
int isBoardFull();
void systemClear();
void playerMove(int player);
int isValidMove(int move);
int isCellOccupied(int move);

char board[] = {' ', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int currentPlayer = 1;

int main() {
    int status = -1;

    printBoard();

    while (status == -1) {
        playerMove(currentPlayer);

        printBoard();
        status = checkWin();

        if (status != -1) {
            break;
        }

        if (isBoardFull()) {
            status = 0;
            break;
        }

        currentPlayer = (currentPlayer % 2) + 1;
    }

    if (status == 1) {
        printf("Player %d is the winner\n", currentPlayer);
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

int checkWin() {
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

void playerMove(int player) {
    int move;

    printf("Player %d, enter your move: ", player);
    scanf("%d", &move);

    if (!isValidMove(move)) {
        printf("Invalid move. Please try again.\n");
        playerMove(player);
        return;
    }

    if (isCellOccupied(move)) {
        printf("Cell already occupied. Please try again.\n");
        playerMove(player);
        return;
    }

    char mark = (player == 1) ? 'X' : 'O';
    board[move] = mark;
}

int isValidMove(int move) {
    return (move >= 1 && move <= 9);
}

int isCellOccupied(int move) {
    return (board[move] == 'X' || board[move] == 'O');
}
