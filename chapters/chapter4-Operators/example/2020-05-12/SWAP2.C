//swap two number without any third variable
void main() {
	int x=20, y=30;

	clrscr();
	printf("x = %d", x);
	printf("\n");
	printf("y = %d", y);

	x = x + y; //20 +30 => 50
	y = x - y; //50 - 30 ==> 20
	x = x - y; //50 - 20 ==> 30

	printf("\n\n");
	printf("After Swapping\n");
	printf("x = %d", x);
	printf("\n");
	printf("y = %d", y);
	getch();
}

