void main() {
	char c, *p=&c;
	int i, *p1=&i;
	float f, *p2=&f;
	double d, *p3=&d;

	clrscr();
	printf("%u %u %u %u\n\n", p, p1, p2, p3);
	printf("%u %u %u %u", ++p, ++p1, ++p2, ++p3);
	getch();
}