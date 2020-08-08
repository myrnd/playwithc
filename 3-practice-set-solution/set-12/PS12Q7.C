void main() {
	int ch1, ch2;
	clrscr();
	do {
		printf("Logic");
		sleep(2);
		if (kbhit()) {
			ch1=getch();
			if (ch1==0) {
				ch2=getch();
				if (ch2==79) {
					break;
				}
			}

		}
	} while(1==1);

	printf("\n\n\n\n\nPress any key to EXIT");
	getch();
}