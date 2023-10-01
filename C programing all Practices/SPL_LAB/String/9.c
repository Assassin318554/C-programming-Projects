#include<stdio.h>

void lowercase(char str[]){
    for(int i=0;str[i]!='\0';i++){
        if('A' <= str[i] && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
    return;
}

void find(char str[],char ch){
    int count=0;
    if('A' <= ch && ch <= 'Z')
        ch = ch + 32;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            count++;
        }
    }
    printf("%d",count);
    return;
}

int main(){
    char ch,str[100];
    gets(str);
    lowercase(str);
    scanf(" %c",&ch);
    find(str,ch);
    return 0;
}