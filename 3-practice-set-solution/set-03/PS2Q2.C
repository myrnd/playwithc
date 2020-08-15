void main() {
	unsigned int empno;
	float sal, itax;
	clrscr();
	printf("Enter Your Employee Number :: ?\b");
	scanf("%d", &empno);
	printf("Enter sal and itax :: ?\b");
	scanf("%f %f", &sal, &itax);

	printf("EmpNo\t\t\t::\t%d\n\n", empno);
	printf("Salary\t\t\t::\t%.2f\n\n", sal);
	printf("iTax\t\t\t::\t%.3f", itax);
	getch();
}