#include<stdio.h>
void digit_sum(char str[]){
    int sum=0;
    for(int i=0;str[i]!='\0';i++){
        if('0'<=str[i] && str[i]<='9'){
            sum += str[i]-'0';
        }
    }
    printf("%d",sum);
    return;
}
int main(){
    char ch,str[100];
    gets(str);
    digit_sum(str);
    return 0;
}