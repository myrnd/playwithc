//base = 2
//exp = 3
//power => 2*2*2 ==> 8
void main() {
	int base, exp, power=1, ctr;
	clrscr();
	printf("Enter base value:: ?\b");
	scanf("%d", &base);
	printf("\n\nEnter exponent value:: ?\b");
	scanf("%d", &exp);

	for(ctr=1; ctr <= exp; ctr++) {
		power = power * base; // 1*2=> 2, 2 * 2=> 4, 4 * 2=> 8
	}
	printf("\n\nPower = %d", power);


	printf("\n\n\nPress any key to EXIT");
	getch();
}