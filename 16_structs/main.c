#include <locale.h>
#include <stdio.h>
#include <string.h>

#define NAME_SIZE 50

typedef struct Person {
    unsigned age;
    float weight;
    char name[NAME_SIZE];
} Person;

int main(int argc, char const *argv[]) {
    setlocale(LC_ALL, "Portuguese");

    Person person = {.age = 30, .weight = 105, .name = "Jacson Rodrigues"};

    printf("Displaying: \n");
    printf("Person Name: %s\n", person.name);
    printf("Person Age: %u\n", person.age);
    printf("Person Weight: %.2f\n", person.weight);

    return 0;
}
