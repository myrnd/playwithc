void main() {
	char ch;
	clrscr(); //clear screen
	printf("Success");//print formatted
	ch = getch();//get char: used to get a character from user
	printf("\n\nch = %c", ch);

	//delay(3000);//milliseconds
	//sleep(5);//seconds

	while(!kbhit());
	//case-1: when no key press: while(!false) ==> while(true) ==> continue in the loop
	//case-2: when a key is pressed on the keyboard: while(!true) ==> while(false) ==> exit from loop
}