#include <stdio.h>
#include <string.h>

void reverse_word(char str[], char str2[], int i, int temp){
    int size = strlen(str);  
    str2[size-i-1]==' ';
    for (int j=temp,k=size-i; j<i; j++,k++){
        str2[k] = str[j];
    }
    return;
}

int main(){
    char str[100];
    gets(str);
    int size = strlen(str), temp = 0;
    char str2[size+1];
    for (int i=0; i<size; i++){
        str2[i]=' ';
    }
    str2[size]='\0';
    for (int i=0; i<=size; i++){
        if (str[i]==' '||str[i]=='\0'){
            reverse_word(str, str2, i, temp);
            temp = i+1;
        }
    }
    puts(str2);
    return 0;
}