#include <stdio.h>
 
#define NAME_LENGTH 50
 
enum Gender
{
    MALE,
    FEMALE
};
 
typedef struct
{
    char name[NAME_LENGTH];
    int age;
    enum Gender gender;
} Person;
 
void printPerson(Person *p)
{
    printf("name: %s\n", p->name);
    printf("age: %d\n", p->age);
    if(p->gender == MALE)
        printf("gender: 男%d\n", FEMALE);
    else
        printf("gender: 女\n");
}
 
int main()
{
    Person person[] = {
        { "A山B男", 20, MALE },
        { "C下D太", 18, MALE },
        { "E田F子", 21, FEMALE },
        { "G山H美", 19, FEMALE },
    };
    printPerson(&person[1]);
 
    getchar();
}