#include<stdio.h>
#define url "https://myrnd.in"
#define PI 3.14

int main() {
    typedef unsigned int Age; //Here Age is nothing but the unsigned int

    Age x;
    x = 20;
    printf("Age = %d", x);

    printf("%s", url);
    printf("%f", PI);
}