void main() {
	int h=0, m=0, s=0, mm=0, ctr=1, ch1, ch2, status=0;
	clrscr();
	do {
		gotoxy(37,13);
		textcolor(2);
		if (h<10)
			cprintf("0%d", h);
		else
			cprintf("%d", h);
		cprintf(":");
		if(m<10)
			cprintf("0%d", m);
		else
			cprintf("%d", m);
		cprintf(":");
		if(s<10)
			cprintf("0%d", s);
		else
			cprintf("%d", s);
		cprintf(":");
		if(mm<10)
			cprintf("00%d", mm);
		else if(mm<100)
			cprintf("0%d", mm);
		else
			cprintf("%d", mm);
		textcolor(0);
		gotoxy(78, 25);
		cprintf(" \b");

		if (kbhit()) {
			ch1 = getch();
			if (ch1 == 0) {
				ch2 = getch();
				if (ch2 == 71) {//HOME
					status=1; //Start
				} else if (ch2 == 107) { //ALT+F4
					status=2; //Exit
				} else if (ch2 == 83) { //DELETE
					status=3;
				} else if (ch2 == 79) { //END
					status=4;
				}
			}
		}
		switch(status) {
			case 1: //HOME
				mm++;
				if(mm==1000) {
					mm=0;
					s++;
					if (s==60) {
						s=0;
						m++;
						if (m==60) {
						  m=0;
						  h++;
						}//close of m
					}//close of s
				}//close of mm
				break;
			case 2: //ALT+F4
				exit(0);
			case 3: //Delete
				mm=s=m=h=0;
				status=1;//START
				break;
			case 4: //END
				status=0;
				break;

		}
	} while(1==1);
	getch();
}