#include <stdio.h>
void find_vowel(char str[]){
    int count=0;
    for(int i=0; str[i]!='\0'; i++){
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U'){
            count++;
        }
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
            count++;
        }
    }
    printf("%d",count);
    return;
}
int main(){
    char str[100];
    gets(str);
    find_vowel(str);
    return 0;
}