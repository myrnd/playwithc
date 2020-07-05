void main() {
	int num, ctr=0;
	clrscr();
	printf("Press any number to count its digits: ?\b");
	scanf("%d", &num);

	while(num>0) {
		num /= 10; //num = num /10;
		ctr++;
	}
	printf("Total digits = %d", ctr);
	getch();

}