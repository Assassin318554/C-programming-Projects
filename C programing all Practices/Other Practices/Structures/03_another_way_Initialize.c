#include<stdio.h>

struct student{
    int id;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {112230169, 3.78, "Nahin"};
    struct student s2 = {112230170, 3,78, "Ador"};
    struct student s3 = {112230155, 3.54, "Ananta"};

    printf("1. Student Name: %s\n",s1.name);
    printf("ID: %d\n",s1.id);
    printf("CGPA: %.2f\n",s1.cgpa);
    printf("\n");

    printf("2. Student Name: %s\n",s2.name);
    printf("ID: %d\n",s2.id);
    printf("CGPA: %.2f\n",s2.cgpa);
    printf("\n");

    printf("3. Student Name: %s\n",s3.name);
    printf("ID: %d\n",s3.id);
    printf("CGPA: %.2f\n",s3.cgpa);

    return 0;
}