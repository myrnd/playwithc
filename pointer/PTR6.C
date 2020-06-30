void main() {
	char *str = "Hello";//\0 ==> NULL
	clrscr();
	printf("%s\n\n", str);

	printf("%u\n\n", str);
	printf("add of 1st el = %u\n\n", &str[0]);
	printf("add of 2nd el = %u\n\n", &str[1]);

	printf("%c\n\n", str[0]);//H
	printf("%c\n\n", str[4]);//o
	printf("%c\n\n", str[5]);
	printf("ASCII of String Terminator = %d\n\n", str[5]); //ASCII SPACE = 32
	printf("ASCII of SPACE = %d\n\n", ' ');


	printf("World\n\n");

	printf(str);


	getch();
}