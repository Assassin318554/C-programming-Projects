#include<stdio.h>
void swap(int a,int b){
    int temp = a;
    a = b;
    b = temp;
    printf("Value in func: %d %d\n",a,b);
    return;
}
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    // Pass by value
    swap(a,b);
    printf("Value in main: %d %d",a,b);
    return 0;
}