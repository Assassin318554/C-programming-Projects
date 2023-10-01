#include <stdio.h>

int str_len(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count-1;
}

void do_find_substr(char str[], char key[]){
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

void find_substr(char str[], char str2[]){
    if(str_len(str)>str_len(str2)) 
        do_find_substr(str,str2);
    else 
        do_find_substr(str2,str);

    return;
}

int main(){
    char str[1000], str2[1000];
    gets(str);
    gets(str2);
    find_substr(str,str2);
    return 0;
}