#include <stdio.h>

struct student
{
    int rollNo;
    char name[100];
    char address[100];
    int age;
    float physics, math;
};

void display(struct student *s)
{
    printf("\nStudent Details:\n");
    printf("Roll No: %d\tName: %s\tAddress: %s\tAge: %d\tPhysics: %.2f\tMath: %.2f", s->rollNo, s->name, s->address, s->age, s->physics, s->math);
}

int main()
{
    struct student s;

    printf("Enter Roll No: ");
    scanf("%d", &s.rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Address: ");
    scanf(" %[^\n]", s.address);

    printf("Enter Age: ");
    scanf("%d", &s.age);

    printf("Enter Physics and Math marks: ");
    scanf("%f %f", &s.physics, &s.math);

    display(&s);

    return 0;
}