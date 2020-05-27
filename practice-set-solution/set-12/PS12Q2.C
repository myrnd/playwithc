void main() {
	int ctr = 1;
	clrscr();

	PRINT:
		printf("Logic");
		ctr++;

	if (ctr<=5)
		goto PRINT;

	getch();
}