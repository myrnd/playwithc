void main() {
	int ch;
	clrscr();
	while(ch != 79) { //END
		printf("\nPress any key to know its name: ?\b");
		ch = getch();
		if (ch >= 'A' && ch <= 'Z') {
			printf("Capital Alphabet");
		} else if (ch >= 'a' && ch<= 'z') {
			printf("Small Alphabet");
		} else if (ch >= '0' && ch <= '9') {
			printf("Digit");
		} else {
		switch(ch) {
			case 8:
				printf("\nBackspace");
				break;
			case 9:
				printf("\nTab");
				break;
			case 13:
				printf("\nEnter");
				break;
			default:
				printf("\nOther Key");
		}
		}
	}
}