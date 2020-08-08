void main() {
	int num, digit, sqr;
	clrscr();
	printf("Enter any number :: ?\b");
	scanf("%d", &num);

	for(digit=0, sqr=0; num > 0; num /= 10) {
		digit = num % 10;
		sqr = digit * digit;
		printf("\n\nDigit = %d\tSquare = %d", digit, sqr);
	}

	printf("\n\n\nPress any key to EXIT");
	getch();

}