int g1, g2;
void main() {
	int x = 20, y, z, *p;

	clrscr();
	printf("value of x = %d\n\n", x);
	printf("address of x = %p\n\n", &x);
	printf("address of x in decimal = %u\n\n", &x);
	printf("address of y in decimal = %u\n\n", &y);
	printf("address of z in decimal = %u\n\n", &z);
	printf("address of g1 = %u\n\n", &g1);
	printf("address of g2 = %u\n\n", &g2);

	p = (int *)malloc(sizeof(int));//heap
	printf("address of dynamic allocation in heap = %u", p);

	//program code
	//heap
	//global
	//stack

	getch();
}