/*
    TICTACTOE.C  (Turbo C++ style)
    Two-player Tic-Tac-Toe using a 2D array
*/

#include<stdio.h>
#include<conio.h>

char board[3][3];

void initBoard();
void displayBoard();
int checkWinner();
int isBoardFull();

void main()
{
    int row,col,player=1,winner=0;
    char mark;
    clrscr();

    initBoard();

    printf("===== TIC-TAC-TOE =====\n");
    printf("Player 1 = X, Player 2 = O\n");

    do
    {
        displayBoard();

        mark=(player==1)?'X':'O';
        printf("\nPlayer %d (%c), enter row and column (0-2 0-2): ",player,mark);
        scanf("%d %d",&row,&col);

        if(row<0 || row>2 || col<0 || col>2 || board[row][col]!='-')
        {
            printf("Invalid move, try again.\n");
            continue;
        }

        board[row][col]=mark;

        winner=checkWinner();
        if(winner)
        {
            displayBoard();
            printf("\nPlayer %d (%c) wins!\n",player,mark);
            break;
        }

        if(isBoardFull())
        {
            displayBoard();
            printf("\nIt's a draw!\n");
            break;
        }

        player=(player==1)?2:1;

    }while(1);

    getch();
}

void initBoard()
{
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            board[i][j]='-';
        }
    }
}

void displayBoard()
{
    int i,j;

    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf(" %c ",board[i][j]);
            if(j<2)
                printf("|");
        }
        printf("\n");
        if(i<2)
            printf("-----------\n");
    }
}

int checkWinner()
{
    int i;

    /* check rows and columns */
    for(i=0;i<3;i++)
    {
        if(board[i][0]!='-' && board[i][0]==board[i][1] && board[i][1]==board[i][2])
            return 1;

        if(board[0][i]!='-' && board[0][i]==board[1][i] && board[1][i]==board[2][i])
            return 1;
    }

    /* check diagonals */
    if(board[0][0]!='-' && board[0][0]==board[1][1] && board[1][1]==board[2][2])
        return 1;

    if(board[0][2]!='-' && board[0][2]==board[1][1] && board[1][1]==board[2][0])
        return 1;

    return 0;
}

int isBoardFull()
{
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(board[i][j]=='-')
                return 0;
        }
    }
    return 1;
}
