/*
    TICTACTOE
    Two-player Tic-Tac-Toe using a 2D array
*/

#include <stdio.h>

char board[3][3];

void initBoard(void);
void displayBoard(void);
int checkWinner(void);
int isBoardFull(void);
void clearScreen(void);

int main(void)
{
    int row, col, player = 1, winner = 0;
    char mark;

    initBoard();

    do
    {
        clearScreen();
        printf("===== TIC-TAC-TOE =====\n");
        printf("Player 1 = X, Player 2 = O\n");
        
        displayBoard();

        mark = (player == 1) ? 'X' : 'O';
        printf("\nPlayer %d (%c), enter row and column (0-2 0-2): ", player, mark);
        
        // Safely validate numeric scan inputs to prevent infinite loops
        if (scanf("%d %d", &row, &col) != 2) {
            printf("Invalid input type! Please enter integers.\n");
            // Clear input buffer
            while (getchar() != '\n');
            continue;
        }

        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != '-')
        {
            printf("Invalid move, try again. Press Enter to continue...");
            while (getchar() != '\n'); // Wait for user interaction
            getchar();
            continue;
        }

        board[row][col] = mark;

        winner = checkWinner();
        if (winner)
        {
            clearScreen();
            printf("===== TIC-TAC-TOE =====\n");
            displayBoard();
            printf("\nPlayer %d (%c) wins!\n", player, mark);
            break;
        }

        if (isBoardFull())
        {
            clearScreen();
            printf("===== TIC-TAC-TOE =====\n");
            displayBoard();
            printf("\nIt's a draw!\n");
            break;
        }

        player = (player == 1) ? 2 : 1;

    } while (1);

    return 0;
}

void initBoard(void)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            board[i][j] = '-';
        }
    }
}

void displayBoard(void)
{
    int i, j;
    printf("\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %c ", board[i][j]);
            if (j < 2)
                printf("|");
        }
        printf("\n");
        if (i < 2)
            printf("-----------\n");
    }
}

int checkWinner(void)
{
    int i;
    /* check rows and columns */
    for (i = 0; i < 3; i++)
    {
        if (board[i][0] != '-' && board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return 1;

        if (board[0][i] != '-' && board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return 1;
    }

    /* check diagonals */
    if (board[0][0] != '-' && board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return 1;

    if (board[0][2] != '-' && board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return 1;

    return 0;
}

int isBoardFull(void)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            if (board[i][j] == '-')
                return 0;
        }
    }
    return 1;
}

/* Modern implementation replacing clrscr() cross-platform */
void clearScreen(void)
{
    // Uses ANSI escape codes to clear the screen and move the cursor to home
    printf("\033[H\033[J"); 
}
