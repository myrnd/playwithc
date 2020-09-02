// CLI: Command Line Interface
#include<stdio.h>

int xyz(int x) {
    printf("%d", x);
}

int main() {
    printf("This is from teset.c");
    xyz(20); // function xyz has been called by function main
    return 0;
} //function main will be called by host operation


