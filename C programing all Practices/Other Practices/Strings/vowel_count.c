#include <stdio.h>
#include <string.h>
int main(){
    char name[]= "NAHIN";
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++){
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u'){
            count++;
        }
        else if (name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i] == 'U'){
            count++;
        }
    }
    printf("\nTotal vowels in the string= %d", count);
    return 0;
}