void main() {
	//int ctr = 0;//local scope or stack
	static int ctr = 0;//global reagion

	if (ctr==0)
		clrscr();d
	printf("Logic");
	ctr++;
	if (ctr<5)
		main();
	else {
		getch();
		exit();
	}
}

//Stack-0 :=> ctr=1
//Stack-1 :=> ctr=1
//Stack-2 :=> ctr=0