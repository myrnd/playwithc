#include<stdio.h>
#include<conio.h>

void main() {
	int x = 20;
	int y = 40;

	clrscr();
	printf("%d", x); //20
	printf("\n");
	printf("%d", x++); //20
	printf("\n");
	printf("%d", --x);//20
	printf("\n");
	printf("%d", x--);//20
	printf("\n");
	printf("%d", x);//19

	x = --y + ++x; //39 + 20 ==> 59 ==> 59
	printf("\n");
	printf("%d", y); //39
	printf("\n");
	printf("%d", x); //59


	getch();
}