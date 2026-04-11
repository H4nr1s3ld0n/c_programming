/* 
  Title : Find Maximum and calculate difference
  Date : April 2026
  Author : H4nr1s3ld0n
  Description : Scans 10 or less integers, stores them in an array, calls the function behind to calculate the difference between the highest and the other scores then returns the result.
  Notions : Pointers
  */

#include <stdio.h>
void behind(int *, int);

int main(void) {
    int array[10];
    int size; 
    int i;
    
    scanf("%d", &size);
    for (i=0; i<size; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, size);
    for (i=0; i<size; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

void behind(int *array, int size){
    int i, j;
    int highest = array[0];
    for(i=0;i<size;i++){
        if(array[i]>highest){
            highest = array[i];
        }
    }
    for(j=0;j<size;j++){
        array[j] = highest - array[j];
    }
    
}
