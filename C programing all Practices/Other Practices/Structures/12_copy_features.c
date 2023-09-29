#include<stdio.h>
#include<string.h>

int main(){
    typedef struct pokemon{
        int hp;
        int attack;
        int speed;
        char tier;
        char name[15];
    }pokemon;

    pokemon a,b;
    
    a.attack=50;
    a.hp=100;
    a.speed=30;
    a.tier='A';
    strcpy(a.name,"Charizard");
    
    b=a; // Deep Copy

    //means:
    // strcpy(b.name,a.name);
    // b.hp=a.hp;
    // b.speed=a.speed;
    // b.tier=a.tier;
    // b.attack=a.attack;

    printf("\n1.\n");
    printf("Name = %s\n",a.name);
    printf("Attack = %d\n",a.attack);
    printf("HP = %d\n",a.hp);
    printf("Speed = %d\n",a.speed);
    printf("Tier = %c\n",a.tier);

    printf("\n\n2.\n");
    printf("Name = %s\n",b.name);
    printf("Attack = %d\n",b.attack);
    printf("HP = %d\n",b.hp);
    printf("Speed = %d\n",b.speed);
    printf("Tier = %c\n",b.tier);    

    return 0;
}