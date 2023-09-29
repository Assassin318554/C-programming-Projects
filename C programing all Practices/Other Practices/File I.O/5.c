#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    fptr = fopen("test2.txt","r");
    if(fptr==NULL){
        printf("File not found!");
    }
    else{
        char str[100];
        fgets(str,100,fptr);
        puts(str);
        fclose(fptr);
    }

    return 0;
}