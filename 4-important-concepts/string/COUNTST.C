void main() {
	char *str, sctr=0, tctr=0, i;
	clrscr();
	printf("Enter any string :: ?\b");
	gets(str);
	printf("Givent string :: %s", str);

	//Hello==>H|e|l|l|o|\0

	for(i=0;str[i]!='\0';i++) {
		if(str[i]==32) {//str[i]==32 //ASCII Value of space
			sctr++;
		} else if (str[i]==9) {//ASCII value of tab is 9
			tctr++;
		}
	}
	printf("\n\nCount of space = %d", sctr);
	printf("\n\nCount of tabs = %d", tctr);
	getch();
}
