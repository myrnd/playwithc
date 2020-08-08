//Fibonacci Series
//0,1
//0,1, (0+1)=1, (1+1)=2, (1+2)=3, (2,3)=5
//0,1,1,2,3,5,8,13,21,34,.....
//ft = 0
//st = 1
//nt = ft+st, ft=st,st=nt
void main() {
	int terms, ctr, ft=0, st=1, nt;
	clrscr();
	INPUT_TERMS:
		printf("Enter number of terms :: ?\b");
		scanf("%d", &terms);

	if (terms<3) {
		printf("Terms should be at least 3\n\n");
		goto INPUT_TERMS;
	}
	printf("%d %d",ft, st);
	for(ctr=3;ctr<=terms;ctr++) {
		nt = ft + st;
		printf(" %d", nt);

		ft=st;
		st=nt;
	}
	printf("\n\n\n\nPress any key to EXIT");
	getch();
}
