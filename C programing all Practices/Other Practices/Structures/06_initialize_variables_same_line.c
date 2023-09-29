#include<stdio.h>
int main(){
    struct pokemon{
        int speed;
        float attack;
        int health;
        char tier;
    }pikachu,charizard,mewtow;
    // upore evebe direct initialize korle niche declare kora jay na.Error ashe.

    /* 
    Like: int a,b,c ->  struct pokemon{...} pikachu,charizard,mewtow;
    int is a data type containing a,b,c.......similarly struct student is 
    also a data type containing pikachu,charizard,mewtow.....Here, a,b,c can perform 
    only integer type work....but pikachu,charizard,mewtow can perform int,float,char
    type wprk
    */
   
    pikachu.attack=80.75;
    pikachu.health=50;
    pikachu.speed=100;
    pikachu.tier='A';

    printf("\n1. Pikachu:\n");
    printf("pikachu.attack = %.2f\n", pikachu.attack);
    printf("pikachu.health = %d\n", pikachu.health);
    printf("pikachu.speed = %d\n", pikachu.speed);
    printf("pikachu.tier = %d\n", pikachu.tier);


    charizard.attack=130.93;
    charizard.speed=80;
    charizard.health=90;
    charizard.tier='S';

    printf("\n2. Charizard:\n");
    printf("charizard.attack = %.2f\n", charizard.attack);
    printf("charizard.health = %d\n", charizard.health);
    printf("charizard.speed = %d\n", charizard.speed);
    printf("charizard.tier = %d\n", charizard.tier);
    
    return 0;
}