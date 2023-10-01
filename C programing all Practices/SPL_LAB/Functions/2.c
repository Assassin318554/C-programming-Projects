#include<stdio.h>
void print(char ch){
    printf("Value received from main: %c",ch);
    return;
}
int main(){
    char ch;
    scanf(" %c",&ch);
    print(ch);
    return 0;
}