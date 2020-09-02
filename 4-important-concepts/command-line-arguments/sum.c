//Take some input from command line argument and calculate summation

#include<stdio.h>
int main(int argc, char *argv[]) {
    int i=1;
    int x = 0;
    int result = 0;
    if (argc >= 3) {
        while(i<argc) {
            x = argv[i];
            printf("%d\n\n", x);
            result += (int)(*argv[i]);
            i++;
        }
        printf("Result = %d", result);
    } else {
        printf("Please pass atleast two numbers");
    }
    return 0;
}