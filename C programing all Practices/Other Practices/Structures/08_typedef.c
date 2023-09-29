#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    typedef struct book{
        char name[50];
        float price;
        int noOfpages;
    }book;
    book a;
    
    a.noOfpages=100;
    a.price=411.5;
    strcpy(a.name,"Secret Seven");
    printf("\na.noOfpages = %d\n",a.noOfpages);
    printf("a.price = %.2f\n",a.price);
    printf("a.name = %s\n\n",a.name);
    
    return 0;
}