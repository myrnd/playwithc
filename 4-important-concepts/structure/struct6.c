#include<stdio.h>
#include<string.h>
int main() {
    typedef struct Book{
        char name[100];
        int pages;
    } B;

    B x;
    B y;
    
    strcpy(x.name, "Let us C");
    x.pages = 203;

    printf("%s", x.name);
   
    return 0;
}