#include<stdio.h>
int main(int argc, char *argv[]) {
    int i=0;
    while(i < argc) {
        printf("%s\n", argv[i]); //argv[0] gives first argument which is prog name
        i++;
    }
    return 0;
}