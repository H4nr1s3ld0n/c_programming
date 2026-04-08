/* 
  Title : Chcolate Pointer Cake
  Date : April 2026
  Author : H4nr1s3ld0n
  Description : Chocolate recipe using pointers and applying a ratio to the ingredients.
  Notions : Pointers
  */

#include <stdio.h>

int main(void){
    double totalLiquid, totalDry, ratio;

    double liquid[2];          
    double dry[3];             
    double *cake[2] ={liquid, dry};

    scanf("%lf %lf", &liquid[0], &liquid[1]);
    scanf("%lf %lf %lf", &dry[0], &dry[1], &dry[2]);

    totalLiquid = cake[0][0] + cake[0][1];                // Using pointer with brackets to point to liquid
    printf("Total amount of liquid ingredients: %.2lf grams.\n", totalLiquid);

    totalDry = cake[1][0] + cake[1][1] + cake[1][2];
    printf("Total amount of dry ingredients: %.2lf grams.\n", totalDry);

    ratio = totalDry / totalLiquid;
    printf("Ratio of dry to liquid ingredients: %.2lf.\n", ratio);

    *(*(cake + 0) + 1) = totalLiquid / 2;               // Using pointers with parenthesis to point to liquid
    *(*(cake + 0) + 0) = totalLiquid / 2;
    printf("New milk amount: %.2lf grams, new butter amount: %.2lf grams.\n", liquid[0], liquid[1]);

    return 0;
}
