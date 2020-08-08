void main() {
	int ctr=1;
	clrscr();
	textcolor(3);
	while(ctr<=20) {
		cprintf("%d ===> %d\n\r", ctr, ctr*ctr*ctr);
		ctr++;
	}
	getch();
}