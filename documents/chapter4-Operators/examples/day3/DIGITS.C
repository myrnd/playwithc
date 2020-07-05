//Play with Digits
void main() {
	int num = 12345;
	clrscr();
	printf("First Digit: %d", num / 10000); // 1
	printf("\nLast Digit: %d", num % 10);// 5
	printf("\nLast Two Digits: %d", num % 100); // 45
	printf("\nLast Three Digits: %d", num % 1000); //345
	printf("\nFirst Two Digits: %d", num / 1000); //12
	printf("\nFirst Three Digits: %d", num / 100); //123

	printf("\nOnly Middle Digit: %d", (num / 100) % 10); // 3
	printf("\nOnly Middle Digit: %d", (num % 1000) / 100); // 3

	// 12 % 10 ==> 2
	// 123 % 10 ==> 3
	// 1234 % 10 ===> 4
	// 123 % 100 ==> 23
	// 1234 % 100 ==> 34
	// 1234 % 1000 ==> 234
	// 1234 / 1000 ==> 1
	// 1234 / 100 ==> 12
	// 1234 / 10 ==> 123
	// 1234 / 1 ==> 1234
	// 1 / 10 ==> 0
	// 1 / 100 ==> 0
	// 12 % 12 ==> 0

	getch();
}