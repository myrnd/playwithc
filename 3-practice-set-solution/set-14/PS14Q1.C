//123
//1*100+2*10+3*1
//1
//1*10+2==>12
//12*10+3==>123
void main() {
	int num=0, ch=0;
	clrscr();
	printf("Enter any number :: ?\b");
	/*
	scanf("%d", &num);
	printf("Accepted Number = %d", num);
	getch();
	*/
	while(1==1) {//13 ===> ASCII value of ENTER key
		ch = getch();
		if (ch == 13)
			break;
		else if (ch >= 48 && ch<=57) {
			printf("%c", ch);
			num = num*10 + (ch-48);//1==>49-48==>1
		}
	}
	printf("\n\nNum = %d", num);
	printf("\n\n\nPress any key to EXIT");
	getch();
}