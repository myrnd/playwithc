void main() {
	int num, dctr=0, temp, d=1;
	clrscr();
	textcolor(3);
	cprintf("Enter any number :: ?\b");
	textcolor(4);
	cscanf("%d", &num);

	for(temp=num;temp>0;temp/=10) {//digit counter
		dctr++;
		d*=10;
	}

	for(temp=num, d/=10;temp>0;temp/=10, d/=10) { //actual calculation to get digit left to right
		cprintf("\n\r%d", (num/d)%10);
		delay(500);
	}

	cprintf("\n\n\n\rPress any key to EXIT");
	getch();//reads extra key pressed due to cscanf
	getch();
}