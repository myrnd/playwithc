#include<stdio.h>
#include<conio.h>

void main() {
	clrscr();
	textcolor(7); //white
	cprintf("Magic");

	//gotoxy(79,25);

	textcolor(0);//black
	cprintf(" \b");

	getch();
}