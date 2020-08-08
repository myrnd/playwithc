void main() {
	int x=20;
	int *p=&x;//0th-level pointer
	int **p1 = &p;//1st-level pointer
	int ***p2 = &p1; //2nd-level pointer


	clrscr();
	printf("x = %d\n", x);
	printf("x = %d\n", *(&x));
	printf("x = %d\n", *p);
	printf("x = %d\n", **p1); //**(&p)=>*(*(&p))=>*(&x));
	printf("x = %d\n", ***p2);
	getch();
}