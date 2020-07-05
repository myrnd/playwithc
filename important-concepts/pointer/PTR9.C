void main() {
	int ary[] = {10, 20, 30, 40, 50, 60, 70};
	int i, *p=ary;
	char *str = "Hello";
	clrscr();
	for(i=0; i<7; i++) {
		printf("%d\t", ary[i]);
	}
	printf("\n\n");
	i=0;
	while(i<7) {
		printf("%d\t", *(ary+i));
		i++;
	}
	printf("\n\n");
	while(1) {
		printf("%d\t", *p++);
		if (*p == 70) {
			printf("%d", *p);
			break;
		}
	}
	printf("\n\n");
	while(1) {
		printf("%c", *str++);
		if(*str == '\0') {
			break;
		}
	}
	getch();

}