void main() {
	int x = 20;
	int *p = &x;//* is known as indirection operator

	clrscr();
	printf("value of x = %d\n", x);//20
	printf("value of x = %d\n", *(&x));//20 here * is an operator called value@address
	printf("value of x = %d\n", *p);
	printf("value of p = %u", p);
	getch();
}