#include<stdio.h>
int main() {
    struct {
        unsigned int a:5; //2 bits
        unsigned int b:3; //3 bits
    } x;

    x.a = 1;
    printf("%d\n\n", x.a);
    printf("%d", sizeof(x));
    return 0;
}