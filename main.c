#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
 
#define C4  261
#define D4  293
#define E4  329
#define F4  349
#define G4  392
#define A4  440
#define B4  493
 
#define C5  523
#define D5  587
#define E5  659
#define F5  698
#define G5  783
#define A5  880
#define B5  987

#define HALF_NOTE 1000
#define QUARTER_NOTE 500
#define EIGHTH_NOTE 250

#define TREE_HEIGHT 24
#define BLACK 0
#define WHITE FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE

#define DARKBLUE FOREGROUND_BLUE
#define DARKCYAN FOREGROUND_GREEN | FOREGROUND_BLUE 
#define BLUE FOREGROUND_INTENSITY | FOREGROUND_BLUE
#define CYAN FOREGROUND_INTENSITY | FOREGROUND_GREEN | FOREGROUND_BLUE 

#define DARKGREEN FOREGROUND_GREEN
#define GREEN FOREGROUND_INTENSITY | FOREGROUND_GREEN

#define DARKRED FOREGROUND_RED
#define RED FOREGROUND_INTENSITY | FOREGROUND_RED

#define DARKMAGENTA FOREGROUND_RED | FOREGROUND_BLUE
#define MAGENTA FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE

#define DARKYELLOW FOREGROUND_RED | FOREGROUND_GREEN 
#define YELLOW FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_GREEN

#define DARKGRAY FOREGROUND_RED | FOREGROUND_GREEN | FOREGROUND_BLUE
#define GRAY FOREGROUND_INTENSITY

void clrscr();
void randColorText();
void randColorSymbolOdd();
void randColorSymbolEven();
void randColorGreen();
void changeToGreen();
void changeToWhite();
void showRandomColorText(const char text[]);
void lyric();
void chorus();
void song();
int drawMerry(int i, int j);
int drawMerry(int i, int j);
void drawRootTree();
void drawChirstMasTree();
void delay(int milliseconds);

void clrscr() {
	system("@cls||clear");
}

void randColorText() {
	char color[5] = {MAGENTA, YELLOW, WHITE, DARKMAGENTA, DARKGREEN};
	
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, color[rand() % 5]);	
}

void randColorSymbolOdd() {
	char color[4] = {DARKBLUE, DARKCYAN, BLUE, CYAN};
	
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, color[rand() % 4]);
}

void randColorSymbolEven() {
	char color[2] = {RED, WHITE};
	
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, color[rand() % 2]);
}

void randColorGreen() {
	char color[2] = {GREEN, DARKGREEN};
	
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, color[rand() % 2]);
}

void changeToGreen() {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, DARKGREEN);	
}

void changeToWhite() {
	HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(hStdOut, WHITE);	
}

void showRandomColorText(const char text[]) {
	randColorText();
	printf("\n");
	printf(text);
	printf("\n");
}

void lyric() {
	printf("\tGood ");
	Beep(G4, QUARTER_NOTE);
	printf("ti");
	Beep(C5, QUARTER_NOTE);
	printf("dings ");
	Beep(C5, QUARTER_NOTE);
	printf("we ");
	Beep(C5, QUARTER_NOTE);
	printf("bring\n");
	Beep(B4, HALF_NOTE);

	printf("\tTo ");
	Beep(B4, QUARTER_NOTE);
	printf("you ");
	Beep(C5, QUARTER_NOTE);
	printf("and ");
	Beep(B4, QUARTER_NOTE);
	printf("your ");
	Beep(A4, QUARTER_NOTE);
	printf("kin\n");
	Beep(G4, HALF_NOTE);
	
	printf("\tGood ");
	Beep(D5, QUARTER_NOTE);
	printf("ti");
	Beep(E5, QUARTER_NOTE);
	printf("dings ");
	Beep(D5, QUARTER_NOTE);
	printf("for ");
	Beep(C5, QUARTER_NOTE);
	printf("Christ");
	Beep(G5, QUARTER_NOTE);
	printf("mas\n");
	Beep(G4, QUARTER_NOTE);
	
	printf("\tAnd ");
	Beep(G4, EIGHTH_NOTE);
	printf("a ");
	Beep(G4, EIGHTH_NOTE);
	printf("Hap");
	Beep(A4, QUARTER_NOTE);
	printf("py ");
	Beep(D5, QUARTER_NOTE);
	printf("New ");
	Beep(B4, QUARTER_NOTE);
	printf("Year\n");
	Beep(C5, HALF_NOTE);
	printf("\n");
}

void chorus() {
	printf("\tWe ");
	Beep(G4, QUARTER_NOTE);
	printf("wish ");
	Beep(C5, QUARTER_NOTE);
	printf("you ");
	Beep(C5, EIGHTH_NOTE);
	printf("a ");
	Beep(D5, EIGHTH_NOTE);
	printf("Mer");
	Beep(C5, EIGHTH_NOTE);
	printf("ry ");
	Beep(B4, EIGHTH_NOTE);
	printf("Christ");
	Beep(A4, QUARTER_NOTE);
	printf("mas\n");
	Beep(A4, QUARTER_NOTE);
	
	printf("\tWe ");
	Beep(A4, QUARTER_NOTE);
	printf("wish ");
	Beep(D5, QUARTER_NOTE);
	printf("you ");
	Beep(D5, EIGHTH_NOTE);
	printf("a ");
	Beep(E5, EIGHTH_NOTE);
	printf("Mer");
	Beep(D5, EIGHTH_NOTE);
	printf("ry ");
	Beep(C5, EIGHTH_NOTE);
	printf("Christ");
	Beep(B4, QUARTER_NOTE);
	printf("mas\n");
	Beep(G4, QUARTER_NOTE);
	
	printf("\tWe ");
	Beep(G4, QUARTER_NOTE);
	printf("wish ");
	Beep(E5, QUARTER_NOTE);
	printf("you ");
	Beep(E5, EIGHTH_NOTE);
	printf("a ");
	Beep(F5, EIGHTH_NOTE);
	printf("Mer");
	Beep(E5, EIGHTH_NOTE);
	printf("ry ");
	Beep(D5, EIGHTH_NOTE);
	printf("Christ");
	Beep(C5, QUARTER_NOTE);
	printf("mas\n");
	Beep(A4, QUARTER_NOTE);
	
	printf("\tAnd ");
	Beep(G4, EIGHTH_NOTE);
	printf("a ");
	Beep(G4, EIGHTH_NOTE);
	printf("Hap");
	Beep(A4, QUARTER_NOTE);
	printf("py ");
	Beep(D5, QUARTER_NOTE);
	printf("New ");
	Beep(B4, QUARTER_NOTE);
	printf("Year\n");
	Beep(C5, HALF_NOTE);
	printf("\n");
}

void song() {
	randColorText();
	chorus();
	randColorText();
	lyric();
	randColorText();
	chorus();
	Sleep(QUARTER_NOTE);
}

int drawMerry(int i, int j) {
	if (j == (TREE_HEIGHT - 6) / 2 + 1) {
		printf("MERRY ");
		j = (TREE_HEIGHT - 6) / 2 + 1 + 5;
	} else {
		randColorSymbolEven();
		printf("*o");
		j++;
	}
	return j;
}

int drawChristmas(int i, int j) {
	if (j == (TREE_HEIGHT - 6) / 2 + 1) {
		printf(" CHRISTMAS");
		j = (TREE_HEIGHT - 6) / 2 + 1 + 9;
	} else {
		randColorSymbolEven();
		printf("*o");
		j++;
	}
	return j;
}

void drawRootTree() {
	int i;
	changeToGreen();
	for (i = 1; i <= TREE_HEIGHT*2; i++) {
		if (i == TREE_HEIGHT - 8) {
			printf("______|    |______");
		} else printf(" ");
	}
	printf("\n");
}

void drawChirstMasTree() {
	int i, j;

	for(i = 1; i <= TREE_HEIGHT; i++) {
		for(j = 1; j <= TREE_HEIGHT-i; j++)
			printf(" ");
			
		for(j = 1; j <= i * 2; j++) {
			randColorGreen();
			if (j == 1) {
				printf("/");
			} else if (j == i * 2) {
				printf("\\");
			} else {
				if (i % 2 == 0 && i != TREE_HEIGHT) {
					if (i == TREE_HEIGHT / 2) {
						randColorText();
						j = drawMerry(i, j);
					} else if (i == TREE_HEIGHT / 2 + 2) {
						randColorText();
						j = drawChristmas(i, j);
					} else {
						randColorSymbolEven();
						printf("*o");
						j++;
					}
				} else if (i % 2 == 0 && i == TREE_HEIGHT) {
					if (j == i - 2) {
						changeToGreen();
						printf("|    |");
						j = j + 5;
					} else {
						randColorSymbolEven();
						printf("*o");
						j++;
					}
				} else {
					randColorSymbolOdd();
					printf("\'o");
					j++;
				}
			}
		}
		printf("\n");
	}
	drawRootTree();
}

void delay(int milliseconds) {
    long pause;
    clock_t now, then;

    pause = milliseconds * (CLOCKS_PER_SEC / 1000);
    now = then = clock();
    while ((now - then) < pause)
        now = clock();
}

int main(int argc, char *argv[]) {
	ShowWindow(GetConsoleWindow(), SW_SHOWMAXIMIZED);
	delay(1000);
	drawChirstMasTree();
	showRandomColorText("             <3 MERRY CHRISTMAS <3");
	delay(1500);
	clrscr();
	drawChirstMasTree();
	showRandomColorText("           ^.^ GIANG SINH AN LANH ^.^");
	delay(1500);
	clrscr();
	drawChirstMasTree();
	showRandomColorText("             ^_^ TAM BIET 2021 ^_^");
	delay(1500);
	clrscr();
	drawChirstMasTree();
	showRandomColorText("               *.* CHAO 2022 *.*");
	delay(1500);
	clrscr();
	drawChirstMasTree();
	showRandomColorText("          ***** MERRY CHRISTMAS *****");
	printf("\n");
	delay(1500);
	song();
	changeToWhite();
	return 0;
}
