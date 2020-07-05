void main() {
	int ch1, ch2;
	clrscr();
	printf("Press any arrow keys : ?\b");
	ch1 = getch();
	printf("\n\nFirst ASCII Value: %d", ch1);
	if (ch1 ==0) {
		ch2 = getch();
		printf("\n\nSecond ASCII Value: %d", ch2);
	} else {
		printf("Invalid Key");
	}
	delay(2000);
}