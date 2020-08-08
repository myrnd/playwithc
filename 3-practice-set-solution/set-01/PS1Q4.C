void main() {
	char ch = 'A';
	clrscr();

	while(ch!='0') {
		printf("\n\nPress any key :: ?\b");
		ch = getche(); //e for echo
		printf("\n\nASCII of %c  =  %d",ch,ch);
	}
}