#include<stdio.h>
#include<string.h>
typedef struct person{
    int age;
    float weight;
}person;
int main(){
    person nahin;
    person *ptr = &nahin;

    (*ptr).age=21;
    (*ptr).weight=100;

    printf("%d\n",(*ptr).age);
    printf("%.2f",(*ptr).weight);
    return 0;
}