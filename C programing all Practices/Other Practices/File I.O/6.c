#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    fptr = fopen("test2.txt","r");
    if(fptr==NULL){
        printf("File not found!");
    }
    else{
        char ch=fgetc(fptr);
        while(ch!=EOF){
            printf("%c",ch);
            ch=fgetc(fptr);
        }
        fclose(fptr);
    }

    return 0;
}