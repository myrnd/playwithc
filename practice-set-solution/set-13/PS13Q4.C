//1/x1 - 2/x2 + 3/x3 - 4/x4
//nr/dr
//nr=ctr ctr<=N
//dr=x^nr
//term=nr/dr
void main() {
	int x, N, ctr, nr, dr;
	float term, result;

	clrscr();
	printf("Enter value of x :: ?\b");
	scanf("%d", &x);
	printf("Enter value of N :: ?\b");
	scanf("%d", &N);

	for(nr=1; nr<=N; nr++) {
		for(dr=1, ctr=1; ctr<=nr; ctr++) {
			dr *= x;//dr = x*x*x
		}
		term = (float)nr/dr; //type casting

		if (nr%2) {//odd
			result += term;
		} else {
			result -= term;
		}
	}
	printf("Result = %f", result);
	printf("\n\n\nPress any key to EXIT");
	getch();
}