 /* 
  Title : Polygon initialization
  Date : April 2026
  Author : H4nr1s3ld0n
  Description : Creates a structure of a polygon of num vertices and initializes the structure.
  */

#include <stdio.h>
#include <stdlib.h>

struct point{
	int x;
	int y;
};

void printPoint(struct point);
void printPoly(struct point *, int);
void initializePoly(struct point *, int);

int main(void) {
    struct point * polygon;
    int num;
    scanf("%d", &num);
    polygon = (struct point *) malloc(num * sizeof(struct point));
    initializePoly(polygon, num);
    printPoly(polygon, num);
    free(polygon);
    return 0;
}

void printPoint(struct point pt) {
    printf("(%d, %d)\n", pt.x, pt.y);
}

void printPoly(struct point *ptr, int N) {
    int i;
    for (i=0; i<N; i++) {
        printPoint(ptr[i]);
    }
}

void initializePoly(struct point *ptr, int M){
    int i = 0;
    for(i=0;i<M;i++){
        ptr[i].x = i * -1;
        ptr[i].y = i * i;
    }
    
}
