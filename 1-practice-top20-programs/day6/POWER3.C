//124 =>
//1 ==> 1*1*1
//2 ==> 2*2*2
//4 ==> 4*4*

//1234 =>
//1 ==> 1*1*1*2
//2 ==> 2*2*2*2
//3 ==> 3*3*3*3
//4 ==> 4*4*4*

void main() {
	int num, digits, ctr, power, temp, d;

	clrscr();
	printf("Enter any number:: ?\b");
	scanf("%d", &num);

	for(digits=0, temp=num; temp > 0; temp /= 10) {//count digits
		digits++;
	}
	for(temp = num; temp > 0 ; temp /= 10) { //gives a digit in every iteration
		d = temp % 10;
		for(power=1, ctr=1; ctr<=digits; ctr++) { //calculate power
			power = power * d;
		}
		printf("\n\nDigit = %d\tPower = %d", d, power);
	}
	printf("\n\n\n\nPress any key to EXIT");
	getch();

}