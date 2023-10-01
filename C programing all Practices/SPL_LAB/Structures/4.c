#include<stdio.h>
#include<string.h>
int main(){
    struct student{
        char name[20];
        char id[20];
        float cgpa;
    };
    struct student a;
    printf("%s\n",a.name);
    printf("%s\n",a.id);
    printf("%f",a.cgpa);  
    return 0;
}