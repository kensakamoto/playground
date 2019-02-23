#include <stdio.h>
 
#define NAME_LENGTH 50
 
typedef struct
{
    char name[NAME_LENGTH];
    int age;
    char gender;
} Person;
 
void printPerson(Person *p)
{
    printf("name: %s\n", p->name);
    printf("age: %d\n", p->age);
    printf("gender: %d\n", p->gender);
}
 
int main()
{
    Person person[] = {
        { "A山B男", 20, 0 },
        { "C下D太", 18, 0 },
        { "E田F子", 21, 1 },
        { "G山H美", 19, 1 },
    };
    printPerson(&person[1]);
 
    getchar();
}