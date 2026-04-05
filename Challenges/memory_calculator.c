  /* 
  Title : Memory Calculator
  Date : April 2026
  Author : H4nr1s3ld0n
  Description : Calculates the memory space needed for arrays of double, int or chars.
  Notions : Use of the function sizeof()
  */

#include <stdio.h>

int main(void){
    int howMany;
    int bytes = 0;
    int i;
    
    scanf("%d", &howMany);
    
    for(i=0;i<howMany;i++)
    {
        char type;
        int quantity;
        scanf("%d %c", &quantity, &type);
        
        if(type == 'i'){
            bytes += quantity * sizeof(int);
        } 
        else if (type == 'd'){
            bytes += quantity * sizeof(double);
        }
        else if (type == 'c'){
            bytes += quantity * sizeof(char);
        }
        else{
            printf("Invalid tracking code type\n");
            return 1;
        }
    
    }
    printf("%d bytes\n", bytes);
    return 0;
}
