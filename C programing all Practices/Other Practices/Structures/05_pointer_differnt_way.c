#include<stdio.h>
int main(){
    struct student{
        int id;
        float cgpa;
        char name[100];
    };

    struct student s1 = {112230169,3.78,"Nahin"};
    // structure to pointer:
    struct student *ptr = &s1;
    
    printf("\n1. *ptr :\n");
    printf("ID with *ptr = %d\n", (*ptr).id);
    printf("Name with *ptr = %s\n", (*ptr).name);
    printf("CGPA with *ptr = %.2f\n", (*ptr).cgpa);

    printf("\n2. ptr-> :\n");
    printf("ID with ptr-> = %d\n", ptr->id);
    printf("Name with ptr-> = %s\n", ptr->name);
    printf("CGPA with ptr-> = %.2f\n", ptr->cgpa);

    return 0;
}