  /* 
  Title : Memory Calculator 2
  Date : April 2026
  Author : H4nr1s3ld0n
  Description : Calculates the memory space needed for arrays of double, int or chars with nice memory output
  Notions : "%=" operator for the conversion process and sizeof() function 
  */


#include <stdio.h>
int main() {
    int quantity = 0;
    int bytes = 0;
    int kilobytes = 0;
    int megabytes = 0;
    char type;
    
    scanf("%c %d", &type, &quantity);
    
    if(type == 'i'){
        bytes += quantity * sizeof(int);
    } 
    else if (type == 'd'){
        bytes += quantity * sizeof(double);
    }
    else if (type == 'c'){
        bytes += quantity * sizeof(char);
    }
    
    if(bytes>=1000000){               // Checking if there are any MB and converting the values
        megabytes = bytes/1000000;
        bytes %= 1000000;
        
        if(bytes>=1000){
            kilobytes = bytes/1000;
            bytes %= 1000;
            printf("%d MB and %d KB and %d B", megabytes, kilobytes, bytes);
        }else{
        printf("%d MB and %d B", megabytes, bytes);
        return 0;
        }
    }
    
    if(bytes>=1000)   // Converting the bytes to KB and checking if there are any.
    {
        kilobytes = bytes/1000;
        bytes %= 1000;
        printf("%d KB and %d B", kilobytes, bytes);
        return 0;
    }
    
    printf("%d B", bytes);
    return 0;
}
