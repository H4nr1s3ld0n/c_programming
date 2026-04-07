#include <stdio.h>

void reverseArray(int *);

int main(){
    int arr[6];
    int i;
    
    for(i=0;i<6;i++){
        scanf("%d", &arr[i]);
    }
    
    reverseArray(arr);
    
    i = 0;
    for(i=0; i<6; i++){  
        printf("%d ", arr[i]);
    }
    
    return 0;
}




void reverseArray(int *ptr){
    int i, tmp;
    for(i = 0; i < 3; i++) {
        tmp = *(ptr + i);
        *(ptr + i) = *(ptr + 5 - i);
        *(ptr + 5 - i) = tmp;
    }
}
