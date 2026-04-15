  /* 
  Title : Student List 1
  Date : April 2026
  Author : H4nr1s3ld0n
  Description : Structure of student that takes input and allocates memory through createStudent function, array of char is passed through copyStr() into the upper function.
  */

#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
char* copyStr(char copy[], char studentName[]);

int main(void) {
    struct student *studptr;
    int myAge;
    char myName[50];
    scanf("%s %d", myName, &myAge);
    studptr = createStudent(myName, myAge);
    printf("New student created: %s is %d years old.\n", studptr->name, studptr->age);
    free(studptr);
    return 0;
}

struct student * createStudent(char studentName[], int studentAge){
    struct student *ptr;
    ptr = (struct student *) malloc(sizeof(struct student));
    copyStr(ptr->name, studentName);
    ptr->age = studentAge;
    return ptr;
}

char* copyStr(char copy[], char studentName[]){
    int i;
    for (i = 0; studentName[i] != '\0'; i++) {
        copy[i] = studentName[i];
        
    }
    copy[i] = '\0'; 
    return (char*)copy;
}
