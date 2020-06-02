//Prime Number                  d
//4: 1, 2, 4 ==>3
//1: 1 ==> 1
//2: 1, 2 ==> 2
//3: 1, 3 ==> 2 => prime number

void main() {
	int ctr, N, num, dr, pctr, sum=0;
	clrscr();
	printf("Enter number of counts :: ?\b");
	scanf("%d", &N);
	for(ctr=1, pctr=1; pctr<=N; ctr++) { //prime counter
		for(num=ctr, dr=2; dr<=num/2; dr++) {//check prime
			if (num%dr == 0) {
				break;
			}
		}
		if (num != 1 && dr>num/2) {
			printf("%d\t", num);
			sum += num;
			pctr++;
		}
	}
	printf("\n\nSum = %d", sum);
	printf("\n\n\nPress any key to EXIT");
	getch();
}