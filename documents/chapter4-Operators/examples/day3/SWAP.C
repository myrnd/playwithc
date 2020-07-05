//swap two number using a third variable
void main() {
	int x = 20, y=30, z;
	clrscr();
	printf("x = %d", x);
	printf("\n");
	printf("y = %d", y);
	printf("\n\n");

	z = x;
	x = y;
	y = z;

	printf("x = %d", x);
	printf("\n");
	printf("y = %d", y);
	getch();
}
