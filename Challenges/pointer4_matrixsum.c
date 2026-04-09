/* 
  Title : Matrix Sum
  Date : April 2026
  Author : H4nr1s3ld0n
  Description : matrix sum using functions and pointers 
  Notions : Pointers
  */

#include <stdio.h>
void sum_matrix(int * mat1, int *mat2, int *res, int line, int col);
void print_matrix(int *res, int line, int col);

int main(void) {
    int mat1[3][3];
    int mat2[3][3];
    int res[3][3];
    int line, col;
    
    printf("Enter your first matrix :\n");
    for(line=0;line<3;line++){
        for(col=0;col<3;col++){
            scanf("%d", &mat1[line][col]);
        }
    }
    for(line=0;line<3;line++){
        for(col=0;col<3;col++){
            scanf("%d", &mat2[line][col]);
        }
    }
    sum_matrix((int *)mat1,(int *)mat2,(int *)res, 3, 3);
    
    print_matrix((int *)res, 3, 3);

    return 0;
}

void sum_matrix(int *mat1, int *mat2, int *res, int line, int col){
    int i, j;
    for(i=0;i<line;i++){
        for(j=0;j<col;j++){
            int idx = i * col + j;
            * (res + idx) = * (mat1 + idx) + * (mat2 + idx);
        }
    }
}
void print_matrix(int *m, int line, int col){
    int i, j;
    for(i=0;i<line;i++){
        for(j=0;j<col;j++){
            int idx = i * col + j;
            printf("%d ", * (m + idx));
        }
        printf("\n");
    }
}
