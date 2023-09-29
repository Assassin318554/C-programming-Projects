#include <stdio.h>
#include <string.h>
typedef struct pokemon{
    int hp;
    int speed;
    int attack;
    char tier;
}pokemon;

void change(pokemon *p){
    p->hp = 100; // One way to access
    p->attack = 130;
    (*p).speed = 150; // Another way to access
    (*p).tier = 'S';
    // (*p).something == p->something
    return;
}

int main(){
    pokemon pikachu;
    pikachu.hp = 80;
    pikachu.speed = 100;
    pikachu.attack = 90;
    pikachu.tier = 'A';
    printf("\n1.Original:\n");
    printf("Name = Pikachu\n");
    printf("HP = %d\n", pikachu.hp);
    printf("Speed = %d\n", pikachu.speed);
    printf("Attack = %d\n", pikachu.attack);
    printf("Tier = %c\n\n", pikachu.tier);

    change(&pikachu);

    printf("\n2.After change:\n");
    printf("Name = Raichu\n");
    printf("HP = %d\n", pikachu.hp);
    printf("Speed = %d\n", pikachu.speed);
    printf("Attack = %d\n", pikachu.attack);
    printf("Tier = %c\n\n", pikachu.tier);

    return 0;
}