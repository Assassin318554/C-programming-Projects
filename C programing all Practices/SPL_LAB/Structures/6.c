#include<stdio.h>
#include<string.h>
int main(){
    struct student{
        char name[20];
        char id[20];
        float cgpa;
    };
    struct student a;

    scanf("%s",&a.name);
    scanf("%s",&a.id);
    scanf("%f",&a.cgpa);

    return 0;
}