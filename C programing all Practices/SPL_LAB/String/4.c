#include <stdio.h>
void find_word(char str[]){
    int count=1;
    for(int i=0;str[i]!='\0';i++){
        if(str[i] == ' '){
            count++;
        }
    }
    printf("%d",count);
    return;
}
int main(){
    char str[100];
    gets(str);
    find_word(str);
    return 0;
}