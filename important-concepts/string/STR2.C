//Palindrome
void main() {
	char *p, *r;
	int len, i;

	clrscr();
	printf("Enter any string :: ?\b");
	gets(p);

	printf("Given String :: %s", p);

	for(len=0; *(p+len) != '\0'; len++);
	printf("\n\nLength of Given String :: %d", len);

	for(i=0, len--; len>=0; r[i++]=p[len--]);
	r[i]='\0';//String Terminator
	printf("\n\nReverse String :: %s", r);

	for(i=0; p[i] != '\0' && p[i] == r[i]; i++);
	if (p[i] == '\0')
		printf("\n\nGiven String is a Palindrome");
	else
		printf("\n\nNot a Palindrome");

	getch();

}