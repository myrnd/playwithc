void main() {
	//getch(); //get char and return int ASCII value. No echo
	//getche(); // echo
	//getchar(); // needs to be pressed the ENTER key
	int ch;
	clrscr();
	printf("Press any key :: ?\b");
	//ch = getch();
	//ch = getche();
	ch = getchar();
	printf("\n\nch :=> %d", ch);
	delay(5000);

}