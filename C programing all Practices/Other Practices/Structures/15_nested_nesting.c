#include<stdio.h>
#include<string.h>
int main(){
    // 1:
    typedef struct pokemon{
        int hp;
        int speed;
        int attack;
        char tier;
    }pokemon;

    // 2:
    typedef struct legendarypokemon{
        pokemon normal;
        char ability[20];
    }legendarypokemon;
    
    // 3: 
    typedef struct godpokemon{
        legendarypokemon legend;
        char special_attack[20];
    }godpokemon;


    godpokemon arceus;
    
    strcpy(arceus.special_attack,"Turn anyone into stone");
    arceus.legend.normal.hp=500;
    arceus.legend.normal.speed=200;
    arceus.legend.normal.attack=500;
    arceus.legend.normal.tier='S';

    printf("1.\n");
    printf("Name = Arceus\n");
    printf("Special Attack = %s\n",arceus.special_attack);
    printf("HP = %d\n",arceus.legend.normal.hp);
    printf("Speed = %d\n",arceus.legend.normal.speed);
    printf("Attack = %d\n",arceus.legend.normal.attack);
    printf("Tier = %c\n",arceus.legend.normal.tier);




    return 0;
}