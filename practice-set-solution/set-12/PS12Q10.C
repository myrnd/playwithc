void main() {
	int ctr, num;
	clrscr();
	textcolor(7);
	textbackground(0);
	cprintf("Enter any number :: ?\b");
	textcolor(4);
	cscanf("%d", &num);
	cprintf("\n\n\n\r");
	textcolor(3);
	for(ctr=1;ctr<=10;ctr++) {
		cprintf("%d\n\r", ctr*num);
	}
	printf("\n\n\n\n\rPress any key to EXIT");
	getch();
	getch();
}