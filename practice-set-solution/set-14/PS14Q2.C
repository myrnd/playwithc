//123

//3, 2, 1
//0*10+3=3
//3*10+2=32
//32*10+1=321
void main() {
	int ascii, num=0, temp;
	clrscr();
	printf("Press any alphabet :: ?\b");

	do {
		ascii = getch();
		if ((ascii>=65 && ascii<=90) || (ascii>=97 && ascii<=122)) {
			printf("%c", ascii);
			printf("\n\nASCII value = %d", ascii);
			temp=ascii;
			while(temp>0) {
				num = num*10 + temp%10;
				temp = temp / 10;
			}
			printf("\n\nReverse of ASCII value = %d", num);
		}
	} while(ascii!=13);

	printf("\n\n\nPress any key to EXIT");
	getch();
}