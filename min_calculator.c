/*
Title: Calculate the smallest number entered.
Author: H4nr1s3ld0n
Date: 2026
*/

#include <stdio.h>

int min(int a, int b);

int main(void){
  
    int total = 0;
    int i = 0;
    
    scanf("%d", &total);
    int numberList[total];
    
    while(i < total)
    {
        scanf("%d", &numberList[i]);
        i++;
    }
    int result = numberList[0];
    for (i=1;i<total;i++)
    {
        result = min(result, numberList[i]);
    }
    printf("%d", result);
  
}

int min(int a, int b)
{
    if(a < b)
    {
        return a;
    }else
    {
        return b;
    }
}
