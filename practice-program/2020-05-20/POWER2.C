void main() {
	unsigned long int num, temp, exp, power, ctr;
	clrscr();
	printf("Enter any positive number :: ?\b");
	scanf("%d", &num);

	for(exp=0, temp=num; num > 0; num /= 10) { //count digit
		exp++;
	}

	for(power=1, ctr=1; ctr<=exp; ctr++) {//iterate exp times
		power = power * temp;
	}
	printf("\n\n\Power = %d", power);

	printf("\n\n\n\nPress any key to EXIT");
	getch();
}