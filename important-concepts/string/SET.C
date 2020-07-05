//take a string and make a character set
void main() {
	char *str, *set;
	int i,j, isExist=0, si=-1;
	clrscr();
	printf("Enter any string :: ?\b");
	gets(str);
	set[0]='\0';
	for(i=0;str[i]!='\0';i++) {
		isExist=0;
		for(j=0;str[j]!='\0';j++) {
			if(str[i] == set[j]) {
				isExist=1;
				break;
			}
		}
		if (!isExist) {
			set[++si] = str[i];
		}
	}
	set[++si]='\0';
	printf("Set = %s", set);
	getch();

}