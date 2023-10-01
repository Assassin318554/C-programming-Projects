#include <stdio.h>

void find_substr(char str[], char key[]){
    int flag2=0;
    for (int i = 0; str[i] != '\0'; i++){
        if(key[0] == str[i]){
            int flag = 0;
            int x = i;
            for (int j = 1; key[j] != '\0'; j++){
                if (key[j] != str[x+1]){
                    flag = 1;
                    break;
                }
                x++;
            }
            if(flag == 0){
                printf("1");
                flag2=1;
                break;
            }   
        }
    }
    if(flag2 == 0)
        printf("0");
    return;
}
int main(){
    char str[1000], key[1000];
    gets(str);
    gets(key);
    find_substr(str, key);
    return 0;
}