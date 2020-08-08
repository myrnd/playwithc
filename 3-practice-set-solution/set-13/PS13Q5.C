//HCF: Highest Common Factor
//2, 4
//2: 1, 2
//4: 1, 2, 4
//Result: 2
//12: 1, 2, 3, 4, 6, 12
//20: 1, 2, 4, 5, 10, 20
//LCM: Lower Common Multiple
//2: 2, 4
//4: 4, 8
//12: 12, 24, 36, 48, 60
//20: 20, 40, 60
void main() {
	int x,y, s, hcf=0, h, lcm=0, ctr;
	clrscr();
	printf("Enter any two numbers :: ?\b");
	scanf("%d %d", &x, &y);

	/*
	if (x<y) {
		h=y;
		if (y%x) {
			s=x;
		} else {
			hcf = x;
		}
	} else {
		h=x;
		if (x%y) {
			s=y;
		} else {
			hcf = y;
		}
	} */
	//if (!hcf) {
	  for(hcf=x<y?x:y; x%hcf || y%hcf; hcf--);
       //	}
	printf("\n\nHCF = %d", hcf);

	for(lcm=h=x>y?x:y, ctr=2; lcm%x || lcm%y; lcm=h*ctr++);
	printf("\n\nLCM = %d", lcm);
	printf("\n\n\nPress any key to EXIT");
	getch();
}