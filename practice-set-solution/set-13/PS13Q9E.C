//    $
//   $$$
//  $$$$$
// $$$$$$$
//$$$$$$$$$
//line?, lctr
//lctr=1, space=line-1, dollar=lctr, sctr, dctr
//lctr++, space--, dollar+=2
void main() {
	int line,lctr, space, sctr, dollar, dctr, color=1;
	clrscr();
	textcolor(7);
	cprintf("Enter number of lines :: ?\b");
	scanf("%d", &line);
	for(lctr=1, space=line-1, dollar=1; lctr<=line; lctr++, space--, dollar+=2) {
		textcolor(color);
		for(sctr=1; sctr<=space; sctr++) {
			cprintf(" ");
		}
		for(dctr=1; dctr<=dollar; dctr++) {
			cprintf("$");
		}
		cprintf("\n\r");
		color++;
		if(color>6)
			color=1;

	}
	cprintf("\n\n\n\r");
	getch();
}