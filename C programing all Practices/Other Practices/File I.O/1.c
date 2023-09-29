#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt","w");
    fclose(fptr);
    
    return 0;
}