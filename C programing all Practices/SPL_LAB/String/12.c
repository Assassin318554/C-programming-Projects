#include <stdio.h>

void substring_occurance(char str[], char str2[]){
    int count=0;
    for (int i = 0; str[i] != '\0'; i++){
        if(str2[0] == str[i]){
            int flag = 0;
            int x = i;
            for (int j = 1; str2[j] != '\0'; j++){
                if (str2[j] != str[x+1]){
                    flag = 1;
                    break;
                }
                x++;
            }
            if(flag == 0)
                count++;  
        }
    }
    printf("%d",count);
    return;
}

int main(){
    char str[1000], str2[1000];
    gets(str);
    gets(str2);
    substring_occurance(str, str2);
    return 0;
}