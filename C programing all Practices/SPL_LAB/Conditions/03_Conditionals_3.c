#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    switch (a){
    case 0:printf("\nzero");
        break;
    case 1:printf("\none");
        break;
    case 2:printf("\ntwo");
        break;
    case 3:printf("\nthree");
        break;
    case 4:printf("\nfour");
        break;
    case 5:printf("\nfive");
        break;
    case 6:printf("\nsix");
        break;
    case 7:printf("\nseven");
        break;
    case 8:printf("\neight");
        break;
    case 9:printf("\nnine");
        break;
    default:
        return 0;
    }
    
    return 0;
}