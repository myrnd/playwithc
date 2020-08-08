//madam
//01234
//123321
void main() {
	char *p;
	int lindex=0, rindex;
	clrscr();
	printf("Enter any string :: ?\b");
	gets(p);

	for(rindex=0; *(p+rindex) != '\0'; rindex++);
	rindex--;

	for(;p[lindex]==p[rindex] && lindex<rindex;lindex++, rindex--);

	if (lindex >= rindex)
		printf("\n\nPalindrome");
	else
		printf("\n\nNot a Palindrome");
	getch(p);
}