#include<stdio.h>
#include<string.h>
int main(){    
    char name1[] = "Apple";
    char name2[] = "Banana";
    printf("\n=  %d",strcmp(name2,name1));
    printf("\n= %d",strcmp(name1,name2));
    char name3[] = "Nahin";
    char name4[] = "Nahiyan";
    printf("\n= %d",strcmp(name3,name4));
    return 0;
}