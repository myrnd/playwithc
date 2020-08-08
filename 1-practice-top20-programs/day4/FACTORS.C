// 6 ==> 1, 2, 3, 6
// 12 ==> 1, 2, 3, 4, 6, 12
// 15 ==> 1, 3, 5, 15

// Print the factors of a given number

void main() {
	int num, ctr;
	clrscr();
	printf("Enter any number :: ?\b");
	scanf("%d", &num);

	printf("Given number :: %d\n\n", num);
	printf("Factors: 1 ");

	for(ctr=2; ctr<=num/2; ctr++) {
		if (num % ctr == 0) {
			printf("%d ", ctr);
		}
	}
	printf("%d", num);
	getch();
}