#include <stdio.h>
int countlength(char str[]){
    int count = 0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}
int main(){
    char str[1000];
    gets(str);
    int length = countlength(str);
    printf("%d",length);
    return 0;
}