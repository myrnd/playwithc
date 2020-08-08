void main() {
	char a;//1 Byte
	int b;//2 Bytes
	float c;//4 Bytes
	double d;//8 Bytes

	//void x;//0 Byte container

	void *p;//
	int *p1;

	clrscr();
	printf("size of void = %d\n\n", sizeof(int));
	printf("size of p = %d", sizeof(p));
	getch();
}