#include<stdio.h>
#include<math.h>
#include<string.h>
int main(){
    struct book{
        char name[50];
        float price;
        int noOfpages;
    }a,b,c;

    a.noOfpages=100;
    a.price=411.5;
    strcpy(a.name,"Secret Seven");
    printf("\na.noOfpages = %d\n",a.noOfpages);
    printf("a.price = %f\n",a.price);
    printf("a.name = %s\n\n",a.name);


    b.noOfpages=200;
    b.price=100.4;
    strcpy(b.name,"Famous Five");
    printf("b.noOfpages = %d\n",b.noOfpages);
    printf("b.price = %f\n",b.price);
    printf("b.name = %s\n\n",b.name);

    c.noOfpages=100;
    c.price=411.5;
    strcpy(c.name,"Secret");
    printf("c.noOfpages = %d\n",c.noOfpages);
    printf("c.price = %f\n",c.price);
    printf("c.name = %s\n",c.name);
    return 0;
}