#include <stdio.h>
#include <string.h>
void slice(char name[], int n, int m){
    char name1[100];
    int j = 0;
    for (int i = n; i <= m; i++,j++){
        name1[j]= name[i];
    }
    name1[j] = '\0';
    strcpy(name,name1);
}
int main(){
    char name[] = "Helloworld";
    int n = 3, m = 6;
    slice(name, n, m);
    puts(name);
    return 0;
}