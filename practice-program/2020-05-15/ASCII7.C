void main() {
	int a, b;

	START:    //label
	clrscr();
	printf("Press ALT+F4 to EXIT");
	a=getch();

	if (a == 0) {
		b=getch();
		if(b == 107) //ALT+F4
			exit(0);
	}
	goto START; //jump to label START

}