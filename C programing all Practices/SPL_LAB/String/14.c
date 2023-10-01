#include <stdio.h>

void lowercase(char str[]){
    for (int i = 0; str[i] != '\0'; i++){
        if ('A' <= str[i] && str[i] <= 'Z')
            str[i] = str[i] + 32;
    }
    return;
}

int find(char str[], char ch){
    int count = 0;
    for (int j = 0; str[j] != '\0'; j++){
        if (str[j] == ch){
            count++;
        }
    }
    return count;
}

void max_char(char str[]){
    int counter, max=0, index;
    for (int i = 0; str[i] != '\0'; i++){
        counter = find(str, str[i]);
        if (counter >= max){
            max = counter;
            index = i;
        }
    }
    printf("%c (or %c)", str[index] - 32, str[index]);
    return;
}

int main(){
    char str[1000];
    gets(str);
    lowercase(str);
    max_char(str);
    return 0;
}