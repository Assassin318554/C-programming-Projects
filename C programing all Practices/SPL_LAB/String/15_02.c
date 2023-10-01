#include <stdio.h>
#include <string.h>

void reverse_by_word(char str[], int i, int temp){
    int size = strlen(str);
    for (int j = temp, k = i - 1; j < k; j++, k--){
        int t = str[j];
        str[j] = str[k];
        str[k] = t;
    }
    return;
}

void reverse_string(char str[]){
    int size = strlen(str);
    for (int i = 0, j = size - 1; i < j; i++, j--){
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    return;
}

int main(){
    char str[100];
    gets(str);
    int size = strlen(str), temp = 0;
    for (int i = 0; i <= size; i++){
        if (str[i] == ' ' || str[i] == '\0'){
            reverse_by_word(str, i, temp);
            temp = i + 1;
        }
    }
    reverse_string(str);
    puts(str);
    return 0;
}