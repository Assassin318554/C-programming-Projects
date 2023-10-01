#include<stdio.h>
#include<string.h>
int main(){
    struct student{
        char name[20];
        char id[20];
        float cgpa;
    };
    struct student a;
    strcpy(a.name,"Nahin");
    strcpy(a.id,"0112230169");
    a.cgpa=3.78;    
    return 0;
}