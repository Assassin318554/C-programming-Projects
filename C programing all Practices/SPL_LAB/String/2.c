#include <stdio.h>
void concatenation(char str[],char str2[],char str3[]){
    int count=0;
    for(int i=0; str[i]!='\0'; i++){
        str3[count]=str[i];
        count++;
    }
    for(int i=0; str2[i]!='\0'; i++){
        str3[count]=str2[i];
        count++;
    }
    puts(str3);
    return;
}
int main(){
    char str[1000],str2[1000],str3[2000];
    gets(str);
    gets(str2);
    concatenation(str,str2,str3);
    return 0;
}