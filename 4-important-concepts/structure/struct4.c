#include<stdio.h>
#include<string.h>
int main() {
    struct {
        int id;
        char name[100];
    } x, *ptr = &x;

    x.id = 20;
    strcpy(ptr->name, "Hindustan");

    printf("id: %d\n\n", ptr->id);
    printf("name: %s", x.name);

    printf("size of structure: %d", sizeof(x));
}