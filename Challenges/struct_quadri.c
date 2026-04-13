 /* 
  Title : Prints the coordinates of four points. 
  Date : April 2026
  Author : H4nr1s3ld0n
  Description : Passes an array of structure into a fonction through a pointer to read and print it.
  Notions : Passing array of structures into a function.
  */

#include <stdio.h>
struct point{
    int a;
    int b;
    int c;
    int d;
};
void printPoint(struct point pt);
void readPoint(struct point * ptr);
void printTriangle(struct point *ptr);

int main(void) {
    struct point quadri[3];
    int i;
    for (i=0; i<3; i++){
        readPoint(&quadri[i]);
    }
    printQuadri(quadri);
	return 0;
}

void readPoint(struct point * ptr) {
    printf("\nEnter a new point: \n");
    printf("a-coordinate: ");
    scanf("%d", &ptr->a);
    printf("b-coordinate: ");
    scanf("%d", &ptr->b);
    printf("c-coordinate: ");
    scanf("%d", &ptr->c);
    printf("d-coordinate: ");
    scanf("%d", &ptr->d);
}

void printQuadri(struct point *ptr) {
    int i;
    for (i=0; i<3; i++) {
        printPoint(ptr[i]);
    }
}

void printPoint(struct point pt){
    printf("(%d, %d, %d, %d)\n", pt.a, pt.b, pt.c, pt.d);
}
