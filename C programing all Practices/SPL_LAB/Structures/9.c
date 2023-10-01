// 9.
#include<stdio.h>
struct student{
    char name[20];
    char id[20];
    float cgpa;
};
void highest_CG(struct student a,struct student b){

    scanf("%s",&a.name);
    scanf("%s",&a.id);
    scanf("%f",&a.cgpa);
    scanf("%s",&b.name);
    scanf("%s",&b.id);
    scanf("%f",&b.cgpa);
    if(a.cgpa>b.cgpa){
        printf("%s\n",a.name);
        printf("%s\n",a.id);
        printf("%.1f\n",a.cgpa);
    }
    else if(a.cgpa<b.cgpa){
        printf("%s\n",b.name);
        printf("%s\n",b.id);
        printf("%.1f",b.cgpa);
    }
}

int main(){
    struct student a,b;
    highest_CG(a,b);     
    return 0;
}