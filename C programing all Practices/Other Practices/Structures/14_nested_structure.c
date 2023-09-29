#include<stdio.h>
#include<string.h>
int main(){
    typedef struct pokemon{
        int hp;
        int speed;
        float attack;
        char tier;
    }pokemon;
    
    /* For nested Structure, instead of doing this:
    typedef struct legendarypokemon{
        int hp;
        int speed;
        float attack;
        char tier;
        char ability[20];
    }legendarypokemon;*/

    // Do this:
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[20];
    }legendarypokemon;

    legendarypokemon mewtow;
    
    strcpy(mewtow.ability,"Pressure");
    mewtow.normal.hp=90;
    mewtow.normal.speed=100;
    mewtow.normal.attack=150;
    mewtow.normal.tier='S';

    printf("\n1.\n");
    printf("Name = Mewtow\n");
    printf("Attack = %d\n",mewtow.normal.attack);
    printf("HP = %d\n",mewtow.normal.hp);
    printf("Speed = %d\n",mewtow.normal.speed);
    printf("Tier = %c\n",mewtow.normal.tier);




    return 0;
}