//1!-2!+3!-4!.......upto N terms
//1-2+6-24 ==> 7-26 ==> -19
//3! ==> 1*2*3 ===> 2*3 ==> 6
//4! ==> 1*2*3*4 ==> 2*3*4 ==> 24
void main() {
	int x, N, result, ctr, term, tctr;
	clrscr();
	printf("Enter value of N :: ?\b");
	scanf("%d", &N);

	for(ctr=1, result=0; ctr<=N; ctr++) {
		for(term=1, tctr=2; tctr<=ctr; tctr++) {
			term *= tctr;
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