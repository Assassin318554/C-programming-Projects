#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("Enter 'n' : ");
    scanf("%d",&n);
    FILE *fptr;
    fptr = fopen("input.txt","w");
    if(fptr==NULL){
        printf("File not found!");
    }
    else{
        fprintf(fptr,"All odd numbers between 1 and %d are: \n-> ",n);
        int x;
        for(int i=0;i<=n;i++){
            if(i%2!=0 && i<n-1){
                fprintf(fptr,"%d, ",i);
            }
            else if(i%2!=0 && (i==n || i==n-1)){
                fprintf(fptr,"%d.",i);
            }
            
        }
        fclose(fptr);
    }

    return 0;
}