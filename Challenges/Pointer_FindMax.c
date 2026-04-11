


#include <stdio.h>
void behind(int *, int);

int main(void) {
    int array[10];
    int N, i;
    
    scanf("%d", &N);
    for (i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }
    behind(array, N);
    for (i=0; i<N; i++) {
        printf("%d\n", array[i]);
    }
    
    return 0;
}

void behind(int * ptr, int total){
    int i, j;
    int highest = ptr[0];
    for(i=0;i<total;i++){
        if(ptr[i]>highest){
            highest = ptr[i];
        }
    }
    for(j=0;j<total;j++){
        ptr[j] = (ptr[j] - highest) * (-1);
    }
    
}
