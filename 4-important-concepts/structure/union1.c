#include<stdio.h>
int main() {
    union Book{
        int pages;
        double xyz;
        //char name[100];
       // char newname[300];
    } x;

    x.pages = 203;
    printf("%d\n\n", x.pages);
    printf("sizeof x = %d", sizeof(x));
}