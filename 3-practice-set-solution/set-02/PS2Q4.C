void main() {
	unsigned int regno, c, cpp, java, vb;
	clrscr();
	printf("Enter RegNo :: ?\b");
	scanf("%u", &regno);

	printf("Enter marks obtained in c cpp java and vb :: ?\b");
	scanf("%u %u %u %u", &c, &cpp, &java, &vb);

	printf("====================================\n");
	printf("Registration No.\t::%u\n", regno);
	printf("------------------------------------\n");
	printf("Marks in C\t::%u\n", c);
	printf("------------------------------------\n");
	printf("Marks in CPP\t::%u\n", cpp);
	printf("------------------------------------\n");
	printf("Marks in Java\t::%u\n", java);
	printf("------------------------------------\n");
	printf("Marks in VB\t::%u", vb);
	getch();
}