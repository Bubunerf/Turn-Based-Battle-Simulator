#include <stdio.h> //For the printf statement stuff
#include <stdlib.h>
#include <time.h>


int main(void){
    
    int player_health = 100;
    int monster_health = 80;
    int user_choice;
    int number_of_potions = 3;
    int max_heal = 15;

    srand(time(NULL));

while (player_health > 0 && monster_health >0) {
    printf("=====Battle Simulator=====\n\n");

    printf("Player Health: %d\n", player_health);
    printf("Monster Health: %d\n\n" , monster_health);

    printf("Choose an action:\n1. Attack\n2. Heal (Number of potions left: %d)\n\n" , number_of_potions);

    
    if (scanf("%d" , &user_choice) == 1){
    
        if (user_choice == 1) {
            int damage_player = rand() % 11 + 10;
            printf("\nYou dealt %d damage!\n", damage_player);
            monster_health -= damage_player;
        
        }
        else if (user_choice == 2) {
            if (number_of_potions > 0) {
                player_health += max_heal;
                if (player_health > 100) {
                    player_health = 100;
                }
                number_of_potions -= 1;
            }
            else if (number_of_potions == 0) {
                printf("You do not have any potions left, you cannot heal\n");
            }

            printf("\nYou healed for %d\n", max_heal);
    
        }
    }
    else {
        continue;
    }

        if (monster_health > 0) {
            int monster_damage = rand() % 11 + 5;
            printf("Monster dealt %d\n\n", monster_damage);
            player_health -= monster_damage;
        }
    
}

    if (player_health <= 0) {
        printf("You lose :(");
    }
    else if (monster_health <= 0) {
        printf("You win the monster is dead!!");
    }

    return 0;
} 