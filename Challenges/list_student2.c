#include <stdio.h>
#include <stdlib.h>

struct student {
      char name[50];
      int age;
      struct student *next;
};

struct student *createStudent(char studentName[], int studentAge);
struct student * append(struct student * end, struct student * newStudptr); 
void printStudents(struct student *start);
char* copyStr(char copy[], char studentName[]);
void freeStudent(struct student *start);


int main(void) {
    struct student *start, *newStudptr, *end, *tmp;
    int ageJ, ageR, ageM;

    scanf("%d %d %d", &ageJ, &ageR, &ageM);

    start = createStudent("Joe", ageJ);
    end = start;

    newStudptr = createStudent("Rayan", ageR);
    end = append(end, newStudptr);

    newStudptr = createStudent("Maria", ageM);
    end = append(end, newStudptr);

    printStudents(start);
	free(start);
    return 0;
}

struct student * createStudent(char studentName[], int studentAge){
    struct student *ptr;
    ptr = (struct student *) malloc(sizeof(struct student));
    copyStr(ptr->name, studentName);
    ptr->age = studentAge;
    return ptr;
}

char * copyStr(char copy[], char studentName[]){
    int i;
    for (i = 0; studentName[i] != '\0'; i++) {
        copy[i] = studentName[i];
    }
    copy[i] = '\0'; 
    return (char*)copy;
}

struct student *append(struct student * end, struct student * newStudptr){
    end->next = newStudptr;
    end = newStudptr;
    return(end);
    
}

void printStudents(struct student * start){
	struct student * ptr = start;
	while(ptr!=NULL){
		printf("%s is %d years old.\n", ptr->name, ptr->age);
		ptr = ptr->next;
	}
	printf("\n");
}

void freeStudents(struct student *start){
	struct student * ptr = start;
	struct student * tmp;
	while (ptr!=NULL){
		tmp = ptr->next;
		free(ptr);
		ptr = tmp;
	}

}
