//*
//**
//***
//****
//*****

void main() {
	int line, lctr, star, sctr;
	clrscr();
	printf("Enter number of lines: ?\b");
	scanf("%d", &line);

	for(lctr=1, star=1; lctr<=line; lctr++, star++) { //for line counting
		for(sctr=1; sctr<=star; sctr++) {
			printf("*");
		}
		printf("\n");
	}
	getch();
}