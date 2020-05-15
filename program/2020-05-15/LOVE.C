//Love Triangle
//*
//**
//***
//****
//*****
void main() {
	int line, linectr=1, heart=1, heartctr;
	clrscr();
	textcolor(7);
	cprintf("Enter number of lines: ?\b");
	textcolor(3);
	cscanf("%d", &line);
	printf("\n\n");

	textcolor(4);
	while(linectr <= line) { //outer loop
		heartctr=1;

		while(heartctr <= heart) { //inner loop
			cprintf("%c", 3);
			heartctr++;
		}
		cprintf("\n\r"); // /r will set the cursor in the beginning
		linectr++;
		heart++;
	}

	textcolor(0); //Black
	cprintf(" \b"); //To Hide Cursor

	delay(3000);
	//while(!kbhit());
}
