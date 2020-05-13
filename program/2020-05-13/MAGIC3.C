#include<stdio.h>
#include<conio.h>
void main() {
	int x=1;
	int d=1;//direction

	while(!kbhit()) {
		clrscr();
		gotoxy(x,13);
		textcolor(2);//green color
		cprintf("MyR&D");
		textcolor(0);//black color
		cprintf(" \b");//hide the cursor
		delay(100);
		if (x<75 && d==1) {
			x++;
		} else {
			d=0;
			if (x>1) {
				x--;
			} else {
				d=1;
			}
		}
	}

}