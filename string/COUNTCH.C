void main() {
	char *str, ch;
	int chctr=0, i;
	clrscr();
	printf("Enter any string :: ?\b");
	gets(str);
	printf("Press any character to count :: ?\b");
	ch = getche();
	printf("\n\nGiven String = %s",str);
	printf("\n\nGiven character = %c",ch);

	for(i=0;str[i]!='\0';i++) {
		if (str[i] == ch) {
			chctr++;
		}
	}
	printf("\n\nCount of %c = %d", ch, chctr);
	getch();

}