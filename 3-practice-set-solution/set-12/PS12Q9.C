void main() {
	int ctr;
	clrscr();
	textcolor(7);
	textbackground(0);
	for(ctr=1;ctr<=10;ctr++) {
		cprintf("%d\n\r", ctr*20);
	}
	getch();
}