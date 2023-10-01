#include <stdio.h>

int strlen(char str[]){
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++){
        count++;
    }
    return count-1;
}
int strcmp(char str[], char str2[]){
    int length = strlen(str);
    int flag = 1;
    for (int i = 0;str2[i]!='\0'; i++){
        if(str[i] != str2[i]){
            flag = 0;
            break;
        }
    }
    return flag;
}

int main(){
    char str[1000],str2[1000];
    gets(str);
    int length = strlen(str);
    int j = 0;
    for (int i = length; i >= 0; i--){
        str2[j] = str[i];
        j++;
    }
    str2[length+1] = '\0';
    if (strcmp(str, str2) == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    
    return 0;
}