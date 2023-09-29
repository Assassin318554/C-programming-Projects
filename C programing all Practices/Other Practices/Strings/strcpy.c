#include<stdio.h>
#include<string.h>

int main(){    
    char name[] = "Nahin";
    char name2[] = "Intesher";
    printf("\n%s", name);
    printf(" %s", name2);
    strcpy(name,name2);
    printf("\n%s", name);
    printf(" %s", name2);
    return 0;
}