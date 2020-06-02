//x-x2+x3-x4-x5+x6......N terms
//Odd Positions: x1+x3+x5.....
//Even Positions: -x2-x4-x6.....

//x=2, N=5
//2-4+8-16+32 ==> 42-20 ==> 22

void main() {
	int x, N, result, ctr, term, tctr;
	clrscr();
	printf("Enter value of x :: ?\b");
	scanf("%d", &x);
	printf("Enter value of N :: ?\b");
	scanf("%d", &N);

	for(ctr=1, result=0; ctr<=N; ctr++) {
		for(term=1, tctr=1; tctr<=ctr; tctr++) {
			term *= x;
		}
		if(ctr%2) {//Odd
			result += term;
		} else {//Even
			result -= term;
		}

	}
	printf("\n\nResult = %d", result);
	printf("\n\n\n\nPress any key to EXIT");
	getch();
}