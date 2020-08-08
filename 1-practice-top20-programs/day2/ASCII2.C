void main() {
	int ch;
	clrscr();
	printf("Press END key to EXIT");
	while(ch != 79) {//79 ==> END key
		printf("\nPress any key to know its ASCII value : ?\b");
		ch = getche();
		printf("\nASCII Value: %d", ch);
	}

}