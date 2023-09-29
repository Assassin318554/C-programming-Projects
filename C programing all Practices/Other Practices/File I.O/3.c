#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    
    fptr = fopen("integer.txt","r");
    if(fptr==NULL){
        printf("File not found!");
    }
    else{
        int x;
        for(int i=1;i<=3;i++){
            fscanf(fptr,"%d",&x);
            printf("%d ",x);
        }
        fclose(fptr);
    }

    return 0;
}