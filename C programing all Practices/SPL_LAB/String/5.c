#include<stdio.h>
#include<string.h>
void reverse(char str[]){
    int count=1,length=strlen(str);
    for(int i=0,j=length-1;i<j;i++,j--){
        int temp=str[i];
        str[i]=str[j];
        str[j]=temp;
    }
    puts(str);
    return;
}
int main(){
    char str[100];
    gets(str);
    reverse(str);
    return 0;
}