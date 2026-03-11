#include <stdio.h>
#define ROWS 6
#define COLS 7

char board[ROWS][COLS];

int main() {
    char PlayerCurrent;
    int moveColumn;

    
    scanf(" %c %d", &PlayerCurrent, &moveColumn);

    
    for (int i = 0; i < ROWS; i++) {
        scanf("%s", board[i]);
    }

    
    if (board[0][moveColumn] != '.') {
        printf("Illegal move\n");
        return 0;
    }

    
    for (int i = ROWS - 1; i >= 0; i--) {
        if (board[i][moveColumn] == '.') {
            board[i][moveColumn] = PlayerCurrent;
            break;
        }
    }

    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            char cell = board[i][j];
            if (cell == '.') continue;
            
           
            if (j + 3 < COLS &&
                cell == board[i][j + 1] &&
                cell == board[i][j + 2] &&
                cell == board[i][j + 3]) {
                printf("%c wins\n", PlayerCurrent);
                return 0;
            }
            
           
            if (i + 3 < ROWS &&
                cell == board[i + 1][j] &&
                cell == board[i + 2][j] &&
                cell == board[i + 3][j]) {
                printf("%c wins\n", PlayerCurrent);
                return 0;
            }
            
           
            if (i - 3 >= 0 && j + 3 < COLS &&
                cell == board[i - 1][j + 1] &&
                cell == board[i - 2][j + 2] &&
                cell == board[i - 3][j + 3]) {
                printf("%c wins\n", PlayerCurrent);
                return 0;
            }
            
            
            if (i + 3 < ROWS && j + 3 < COLS &&
                cell == board[i + 1][j + 1] &&
                cell == board[i + 2][j + 2] &&
                cell == board[i + 3][j + 3]) {
                printf("%c wins\n", PlayerCurrent);
                return 0;
            }
        }
    }

    
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (board[i][j] == '.') {
                printf("Ongoing game\n");
                return 0;
            }
        }
    }

    
    printf("Tie game\n");

    return 0;
}
