void main() {
	int color = 1;

	clrscr();
	textcolor(2);//colors: 0 - 15
	textbackground(7);
	cprintf(" MyR&D ");

	while(!kbhit()) {
		textcolor(color);
		gotoxy(37,13);
		textbackground(0);
		cprintf("MyR&D");
		delay(300);
		color++;
		if (color == 16) {
			color=1;
		}
	}

	//getch();
}