#include <stdio.h> //For the printf statement stuff
#include <stdbool.h> //For being able to create a boolean variable
#include <string.h> // Usefull for string operations and methods
#include <stdlib.h>


int main(){
    
    int player_health = 100;
    int monster_health = 80;
    int user_choice;
    printf("Player Health %d", player_health);
    printf("Monster Health %d" , monster_health);

    printf("Choose an action:\n1. Attack\n2. Heal");
    scanf("%d" , &user_choice);

    

    return 0;
} 