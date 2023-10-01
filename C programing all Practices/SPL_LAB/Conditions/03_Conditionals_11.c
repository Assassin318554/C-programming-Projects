#include<stdio.h>
int main(){
    float a;
    scanf("%f", &a);
    if(a>=0 && a<=100){
        if(a>=90) 
            printf("Grade: A");
        else if(a>=86) 
            printf("Grade: A-");
        else if(a>=82) 
            printf("Grade: B+");
        else if(a>=78) 
            printf("Grade: B");
        else if(a>=74) 
            printf("Grade: B-");
        else if(a>=70) 
            printf("Grade: C+");
        else if(a>=66) 
            printf("Grade: C");
        else if(a>=62) 
            printf("Grade: C-");
        else if(a>=58) 
            printf("Grade: D+");
        else if(a>=55) 
            printf("Grade: D");
        else 
            printf("Grade: F");
    }
    else 
        printf("Invalid Mark!!!");

    return 0;
}
