//12 ==> 1^2 + 2^2 ==> 1 + 4 ==> 5
//153 ==> 1*1*1 + 5*5*5 + 3*3*3 ==> 1 + 125 + 27 ==> 153
//9 ==> 9*1 => 9

void main() {
	int num,temp, power, digit, ctr, digits, sum=0;
	clrscr();
	printf("Enter any number :: ?\b");
	scanf("%d", &num);

	for(digits=0, temp=num; temp>0; temp/=10, digits++);//count digits

	for(temp=num; temp>0; temp/=10) {//digit
		digit=temp%10;
		for(ctr=1, power=1; ctr<=digits; ctr++) {//calculate power
			power *= digit;
		}
		sum += power;
	}
	if (num == sum) {
		printf("\n\n%d is an Armstrong Number", num);
	} else {
		printf("\n\n%d is not an armstrong number", num);
	}

	printf("\n\n\n\nPress any key to EXIT");
	getch();
}

