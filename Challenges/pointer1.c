#include <stdio.h>

int main(void) {
    int playerGold = 50;
    int dragonGold = 150;
    int *playerPointer = &playerGold;
    int *dragonPointer = &dragonGold;
    
    printf("Player Gold is at : %p\n", playerPointer);
    printf("Dragon Gold is at : %p\n", dragonPointer);
    
    printf("The battle begins ! Player : %d v.s Dragon : %d\n", *playerPointer, *dragonPointer);
    
    printf("Dragon defeated, player stole : %d gold\n", * dragonPointer);

    *playerPointer = *playerPointer + *dragonPointer;
    *dragonPointer = 0;
    
    
    return 0;
}
