//How to accept a string from end user
void main() {
	//scanf: without
	//gets: with space
	//char pointer: no reservation
	//char array: size

	char *p;
	int i=0;
	clrscr();
	printf("Enter any string :: ?\b");
	//gets(p);//100 Hello\0
	scanf("%s", p);


	while(i<10) {
		//printf("%c", p[i]);
		printf("%d==>%d\n\n", i, *(p+i++));
	}

	//puts(p); //'\0'
	getch();

}