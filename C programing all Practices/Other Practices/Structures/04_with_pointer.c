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
    // structure to pointer to pointer:
    struct student **pptr = &ptr;

    printf("ID = %d\n",(*ptr).id);
    printf("Name = %s\n",(*ptr).name);
    printf("CGPA = %.2f\n",(*ptr).cgpa);
    printf("\n");
    printf("ID = %d\n",(**pptr).id);
    printf("Name = %s\n",(**pptr).name);
    printf("CGPA = %.2f\n",(**pptr).cgpa);
    return 0;
}