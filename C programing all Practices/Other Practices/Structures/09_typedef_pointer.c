#include <stdio.h>
typedef int* pointer;
int main(){
    int x = 5, y = 7;
    pointer a = &x, b = &y;
    printf("Address of x: %p\n", a);
    printf("Address of y: %p\n", b);
    return 0;
}