void main() {
	int ctr, sum=0;
	clrscr();
	textcolor(3);
	for(ctr=1;ctr<=10;ctr++) {
		sum+=ctr;
	}
	cprintf("Sum = %d", sum);
	getch();
}