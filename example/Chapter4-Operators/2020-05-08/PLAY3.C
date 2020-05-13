#include<stdio.h>
void main() {
	clrscr();
	printf("%d", 5/2); //2
	printf("\n\n");

	printf("%f", 5.0/2); //2.5
	printf("\n\n");
	printf("%f", 5/2.0); //2.5
	printf("\n\n");
	printf("%f", 5.0/2.0); //2.5
	printf("\n\n");

	printf("%.2f", 5.0/2); //2.50
	getch();
}