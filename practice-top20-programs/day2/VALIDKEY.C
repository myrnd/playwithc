void main() {

	int ch;
	clrscr();
	printf("Press Y or N to EXIT: ?\b");
	while(ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n') {
		ch = getch();
		if (ch != 'Y' && ch != 'y' && ch != 'N' && ch != 'n') {
			nosound();
		} else {
			sound(700);
			delay(1000);
		}
	}
}