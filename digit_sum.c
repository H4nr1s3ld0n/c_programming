  /* 
  Title : Digit sum
  Date : April 2026
  Author : H4nr1s3ld0n
  Description : Enter a number and adds each digit separately !
  Notions : Recursive function to create a loop.
  */

#include <stdio.h>

int sumOfDigits(int);
int main(void){
    int digit = 0;
    int final = 0;
    scanf("%d", &digit);
    
    if(digit <=0) // Checking if the number is positive. 
    {
        printf("Error, please enter a positive number.\n");
        return 1;
    }
    
    final = sumOfDigits(digit);   // Calling function sum of Digits.
    printf("The sum of each digit is : %d", final);
    
    return 0;
}

int sumOfDigits(int n)  // Extracts the last digit and adds it to the next.
{
    if (n<10)
    {
        return n;
    }
    return (n%10) + sumOfDigits(n /10);  // Recursive call of the same function to extract value with modulo

}
