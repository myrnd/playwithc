void main() {
	char *p=4;

	int *p1 = ((int*)65524);
	int x = 20;
	int i=0;

	clrscr();
	printf("value of x = %d\n\n", x);
	printf("add of x = %u\n\n", &x);
	printf("value of x = %d\n\n", *(&x));
	printf("value of x = %d\n\n", *p1);

	printf("%c\n\n", *p);
	printf("%c\n\n", p[0]);
	printf("%c\n\n", p[1]);

	while(1) {
		printf("%c", *p++);
	}

	//p[2] = '\0';

	printf(p);

	/*
	while(p) {
		if(p==((char*)65524)) {
			printf("%c",*p);
			break;
		}
		p++;
	}
	*/

	getch();
}