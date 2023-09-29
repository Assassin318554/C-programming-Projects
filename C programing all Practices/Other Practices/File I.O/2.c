#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    
    fptr = fopen("test.txt","r");
    if(fptr==NULL){
        printf("File not found!");
    }
    else{
        char ch;
        for(int i=1;i<=29;i++){
            fscanf(fptr,"%c",&ch);
            printf("%c",ch);
        }
        fclose(fptr);
    }

    return 0;
}