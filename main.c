#include <stdio.h> //For the printf statement stuff
#include <stdbool.h> //For being able to create a boolean variable
#include <string.h> // Usefull for string operations and methods
#include <stdlib.h>
#include <time.h>


int main(){
    
    int player_health = 100;
    int monster_health = 80;
    int user_choice;
    
    int max_heal = 15;

    srand(time(NULL));
while (player_health > 0 && monster_health >0) {
    printf("=====Battle Simulator=====\n\n");

    printf("Player Health: %d\n", player_health);
    printf("Monster Health: %d\n\n" , monster_health);

    printf("Choose an action:\n1. Attack\n2. Heal\n\n");
    scanf("%d" , &user_choice);

    if (user_choice == 1) {
        int damage_player = rand() % 11 + 10;
        printf("\nYou dealt %d damage!\n", damage_player);
        monster_health -= damage_player;
        
    }
    else if (user_choice == 2) {
        player_health += max_heal;
        printf("\nYou healed for %d\n", max_heal);
    
    }
    else
        printf("Enter a valid option!\n");

    
    int monster_damage = rand() % 11 + 5;
    printf("Monster dealt %d\n\n", monster_damage);
    player_health -= monster_damage;
}


    return 0;
} 