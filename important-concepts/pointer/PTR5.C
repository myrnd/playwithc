void fun() {
	printf("I m from fun");
}
void main() {
	void *a;
	char *b;
	int *c;
	float *d;
	double *e;
	void (*f)() = main;

	int ary[5];

	clrscr();
	printf("size of ary = %d\n", sizeof(ary));
	printf("value of ary = %p\n", ary);
	printf("add of 1st ele = %p\n", &ary[0]);

	printf("main = %p\n", main);
	printf("f = %p\n", f);

	printf("size of fun = %d\n", sizeof(f));

	f = fun;
	f();
	getch();
}