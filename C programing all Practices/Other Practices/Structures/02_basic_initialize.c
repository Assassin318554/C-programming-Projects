#include<stdio.h>
#include<string.h>

struct student{
    int id;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;
    struct student s2;
    struct student s3;

    s1.id = 112230169;
    s2.id = 112230170;
    s3.id = 112230155;

    s1.cgpa = 3.78;
    s2.cgpa = 3.78; 
    s3.cgpa = 3.54;

    strcpy(s1.name,"Nahin Intesher");
    strcpy(s2.name,"Nurul Alam Ador");
    strcpy(s3.name,"Mueen Ishraq Anata");

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