#include <stdio.h>
int main(){
    char str[1000];
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        if('a' <= str[i] && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
        else if('A' <= str[i] && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
    puts(str);
    return 0;
}