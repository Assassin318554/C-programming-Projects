#include<stdio.h>
#include<string.h>
void swap(char str[],int i,int j){
    int temp=str[i];
    str[i]=str[j];
    str[j]=temp;
}
void sort(char str[]){
    int 
    length=strlen(str);
    for(int i=0;i<length-1;i++){
        for(int j=i+1;j<length;j++){
            if(str[i]>str[j]){
                swap(str,i,j);
            }
        }
    }
    return;
}
int main(){
    char str[100];
    gets(str);
    sort(str);
    puts(str);
    return 0;
}