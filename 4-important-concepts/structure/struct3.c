//struct :=> Structure
//Array :=> deals with multiple values but the problem is it can store similary kind of data

//Person
//Fisrt Name: string
//Last Name: string
//Age: integer
//Pin Code: integer
//isMarried: true/false

#include<stdio.h>
#include<string.h>

struct Employee {
    int id;
    char name[100];
    char address[200];
    unsigned int age;
} anil, x, y, vivek;

int main() {
    //struct Employee anil;
    struct Employee *ptr = &anil;
    anil.id = 1;
    anil.age = 35;
    strcpy(anil.name, "Anil Kumar");
    strcpy(anil.address, "Bangalore");

    printf("Name: %s\n\n", anil.name);
    printf("Age: %d\n\n", anil.age);
    printf("Address: %s\n\n", anil.address);
    printf("Address = %s\n\n", ptr->address);

    printf("size of struc = %d", sizeof(anil));
    
    return 0;
}