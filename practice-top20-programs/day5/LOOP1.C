void main() {
	int ctr1, ctr2=1;
	clrscr();
	for(ctr1=1; ctr1<=3; ctr1++) {
		printf("\nOuter Loop: %d", ctr1);
		for(ctr2=1; ctr2<=5; ctr2++) {
			printf("\n\tInner Loop: %d", ctr2);
		}
	}
	getch();
}