#include <stdio.h>
#include <string.h>
void repeated_char(char str[]){
    int size=strlen(str);
    for (int i = 0; i<size; i++){
        for(int j = i + 1; j<=size; j++){
            if(str[i]==str[j]){
                for(int k = j ; k<=size; k++)
                    str[k]=str[k+1];    
                size--;
                j--;
            }
        }
    } 
    return;
}
int main(){
    char str[1000];
    gets(str);
    repeated_char(str);
    puts(str);
    return 0;
}