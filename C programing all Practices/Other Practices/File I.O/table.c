#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter the number which table you want? : ");
    scanf("%d",&n);
    FILE *fptr;
    fptr = fopen("table.txt","w");
    fprintf(fptr,"     Table of '%d'\n",n);
    fprintf(fptr,"     ----------------\n\n");
    for (int i = 1; i <= 10; i++){
        fprintf(fptr,"     %d X %d = %d\n",n,i,n*i);
    }
    fclose(fptr);
    printf("Successfully generated table of %d table.txt.",n);

    return 0;
}