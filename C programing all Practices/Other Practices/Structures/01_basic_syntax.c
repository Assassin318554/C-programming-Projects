#include<stdio.h>
#include<string.h>

int main(){
    struct student{
        int id;
        float cgpa;
        char name[100];
    };
    
    struct student s1;
    s1.id = 2230169;
    s1.cgpa= 3.78; 
    strcpy(s1.name,"Nahin");
    
    printf("Student Name: %s\n",s1.name);
    printf("ID: %d\n",s1.id);
    printf("CGPA: %.2f\n",s1.cgpa);
    return 0;
}