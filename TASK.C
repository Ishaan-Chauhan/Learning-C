/*
			Author - Ishaan
			DOC - 6 Aug 2026
			Objective - Task by Dhiraj Sir
*/
#include <stdio.h>
#include <conio.h>

void main()
{
    int main_choice, sub_choice;
    char ch;
    int i, j;

    do
    {
	clrscr();


	printf("\nMAIN MENU:\n");
	printf("1-----------For\n");
	printf("2-----------while\n");
	printf("3-----------do while\n");
	printf("4-----------exit\n");
	printf("\nEnter your choice (1-4): ");
	scanf("%d", &main_choice);

	if (main_choice == 4) {
	    printf("\nExiting program...\n");
	    break;
    }


	if (main_choice < 1 || main_choice > 4) {
	    printf("\nInvalid choice! Press any key to try again...");
	    getch();
	    continue;
	}

	printf("\nSUB MENU:\n");
	printf("1-----print small a...z\n");
	printf("2-----print capital A----Z\n");
	printf("3-----normal triangle\n");
	printf("4-----reverse triangle\n");
	printf("\nEnter your sub-choice (1-4): ");
	scanf("%d", &sub_choice);

	printf("\nOutput:\n");

	switch (main_choice) {

	    case 1:
		switch (sub_choice) {
		    case 1:
			for(ch = 'a'; ch <= 'z'; ch++) { printf("%c ", ch); }
			break;
		    case 2:
			for(ch = 'A'; ch <= 'Z'; ch++) { printf("%c ", ch); }
			break;
		    case 3:
			for(i = 1; i <= 5; i++) {
			    for(j = 1; j <= i; j++) { printf("* "); }
			    printf("\n");
			}
			break;
		    case 4:
			for(i = 5; i >= 1; i--) {
			    for(j = 1; j <= i; j++) { printf("* "); }
			    printf("\n");
			}
			break;
		    default: printf("Invalid Sub Choice!");
		}
		break;

	    case 2:
		switch (sub_choice) {
		    case 1:
			ch = 'a';
			while(ch <= 'z') { printf("%c ", ch); ch++; }
			break;
		    case 2:
			ch = 'A';
			while(ch <= 'Z') { printf("%c ", ch); ch++; }
			break;
		    case 3:
			i = 1;
			while(i <= 5) {
			    j = 1;
			    while(j <= i) { printf("* "); j++; }
			    printf("\n");
			    i++;
			}
			break;
		    case 4:
			i = 5;
			while(i >= 1) {
			    j = 1;
			    while(j <= i) { printf("* "); j++; }
			    printf("\n");
			    i--;
			}
			break;
		    default: printf("Invalid Sub Choice!");
		}
		break;

	    case 3:
		switch (sub_choice) {
		    case 1:
			ch = 'a';
			do { printf("%c ", ch); ch++; } while(ch <= 'z');
			break;
		    case 2:
			ch = 'A';
			do { printf("%c ", ch); ch++; } while(ch <= 'Z');
			break;
		    case 3:
			i = 1;
			do {
			    j = 1;
			    do { printf("* "); j++; } while(j <= i);
			    printf("\n");
			    i++;
			} while(i <= 5);
			break;
		    case 4:
			i = 5;
			do {
			    j = 1;
			    do { printf("* "); j++; } while(j <= i);
			    printf("\n");
			    i--;
			} while(i >= 1);
			break;
		    default: printf("Invalid Sub Choice!");
		}
		break;
	}

	printf("\n\nPress any key to return to Main Menu...");
	getch();

    } while (main_choice != 4);
}//main