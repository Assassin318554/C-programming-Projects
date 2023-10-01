#include<stdio.h>
int main(){
    char ch;
    scanf("%c", &ch);
    if(ch >= '0' && ch <= '9') 
        printf("Digit");
    else if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
        printf("Alphabet");
    else 
        printf("Special");
    return 0;
}
