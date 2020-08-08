//N perfect numbers, where N?
//Perfect
//6: 1, 2, 3, 6: ==> 1+2+3 ===> 6
//28: 1, 2, 4, 7, 14, 28 ==> 1+2+4+7+14 ==> 28

void main() {
	unsigned long int N, ctr, pctr=0, num, temp, sum, factor;
	clrscr();
	printf("Enter value of N :: ?\b");
	scanf("%d", &N);

	for(ctr=1; pctr<N; ctr++) { //loop driver
		for(num=ctr, sum=0, factor=1; factor<=num/2; factor++) {
			if (num%factor==0) {
				sum += factor;
			}
		}
		if (num == sum) {
			printf("%d\t", num);
			pctr++;
		}
	}
	printf("\n\n\nPress any key to EXIT");
	getch();
}
