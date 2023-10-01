#include<stdio.h>
int main(){
    int i = 1;
    char ch;
    while(ch != 'A'){
        scanf(" %c", &ch);
        if(ch!='A'){
            printf("Input %d: %c\n", i, ch);
            i++;
        }
        else 
            break;
    }
    return 0;
}