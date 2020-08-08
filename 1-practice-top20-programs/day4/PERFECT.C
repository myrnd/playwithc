// Perfect Number
// 6 :=> 1 2 3 6 :=> 1 + 2 + 3 :=> 6
// 24 :=> 1, 2, 3, 4, 6, 8, 12, 24 :=> 1+2+3+4+6+8+12 :=> 36
// 28: => 1, 2, 4, 7, 14, 28 :=> 1+2+4+7+14 :=> 28

void main() {
	int num, ctr, sum = 1;

	clrscr();
	printf("Enter any number :: ?\b");
	scanf("%d", &num);

	printf("Given number :: %d", num);
	for(ctr=2; ctr<=num/2; ctr++) {
		if (num%ctr == 0) {
			sum += ctr; //sum = sum + ctr;
		}
	}
	if (num == sum) {
		printf("\nIt's a perfect number");
	} else {
		printf("\nIt's not a perfect number");
	}
	getch();
}