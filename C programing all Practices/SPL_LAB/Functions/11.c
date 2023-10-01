#include<stdio.h>
#include<string.h>
void printsize(char str[]){
    gets(str);
    int size = strlen(str);
    printf("%d",size);
    return;
}
int main(){
    char str[1000];
    printsize(str);
    return 0;
}