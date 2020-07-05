//list out all the perfect in between given range
void main() {
	int num, ctr, sum, start, end, perfect=0;

	clrscr();
	printf("Enter starting from :: ?\b");
	scanf("%d", &start);
	printf("Enter end value :: ?\b");
	scanf("%d", &end);                      //sum=1+2+3
					//ctr=2+1+1

	for(num=start; num<=end; num++) { //outer loop
		for(ctr=2, sum=1; ctr<=num/2; ctr++) { //inner loop
			if (num%ctr == 0) {
				sum += ctr;
			}
		}
		if (num == sum) {
			printf("%d\t", num);
			perfect++;
		}
	}
	printf("\n\nTotal count of perfect numbers = %d", perfect);
	printf("\n\nPress any key to exit");
	getch();
}