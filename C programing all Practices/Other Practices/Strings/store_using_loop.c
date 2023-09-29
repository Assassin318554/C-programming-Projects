#include<stdio.h>
void printstrings(char arr[]){
    for (int i = 0; arr[i] != '\0'; i++){
        printf("%c",arr[i]);
    }
    printf(" ");
    return 0;
}
int main(){    
    char firstname[]= "NAHIN";
    char lastname[]= "INTESHER";
    printf("\n");
    printstrings(firstname);
    printstrings(lastname);
    return 0;
}