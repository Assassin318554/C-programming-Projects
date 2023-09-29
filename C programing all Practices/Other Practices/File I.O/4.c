#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fptr;
    fptr = fopen("test2.txt","w");
   
    char str[100];
    scanf("%[^\n]s",str);
    fputs(str,fptr);
    fclose(fptr);

    
    return 0;
}