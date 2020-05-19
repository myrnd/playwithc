//    *
//   ***
//  *****
// ********
//**********

//lctr=1, space=line-1, star=1
//lctr++, space--, star+=2

void main() {
	int line, lctr, space, spctr, star, sctr;
	clrscr();
	printf("Enter number of lines: ?\b");
	scanf("%d", &line);

	for(lctr=1, space=line-1, star=1; lctr<=line; lctr++, space--, star+=2) {//line
		for(spctr=1; spctr<=space; spctr++) {//space
			printf(" ");
		}
		for(sctr=1; sctr<=star; sctr++) {//star
			printf("*");
		}
		printf("\n");
	}
	getch();
}