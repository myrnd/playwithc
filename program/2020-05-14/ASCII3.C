void main() {
	int ch = 1;
	clrscr();

	while(!kbhit()) {
		printf("%c  :==>  %d\n\n", ch, ch);
		delay(200);
		ch++;
		if (ch > 255)
			ch =d 1;
	}
}
