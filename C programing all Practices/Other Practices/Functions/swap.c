#include <stdio.h>
void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

int main(){
    int a,b;
    printf("\nEnter a and b: ");
    scanf("%d%d", &a, &b);
    swap(&a,&b);
    printf("a and b is : %d and %d",a,b);
    return 0;
}