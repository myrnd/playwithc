//*****
//****
//***
//**
//*
void main() {
	int line, lctr, star, sctr;
	clrscr();
	printf("Enter number of lines: ?\b");
	scanf("%d",&line);

	for(lctr=1, star=line; lctr<=line; lctr++, star--) {//line
		for(sctr=1; sctr<=star; sctr++) {//star
			printf("*");
		}
		printf("\n");
	}
	getch();
}