#include<stdio.h>
int main(int argc, char *argv[]) {
    if (argc == 1) {
        printf("Must pass at least one argument");
    } else {
        printf("Nice Job!!");
        printf("Total arguments found: %d", argc-1);
    }
}