#include <stdio.h>

struct student{
	char name[10];
	int age;
	int average;
	struct student * next;
};
void printStudent(struct student * start);
struct student *  addStudent(struct student * start, struct student * newStud);
int main(void){
	struct student * start, *end, * ptr;
	struct student Joe = {"Joe", 23, 17, NULL};
	struct student Maria = {"Maria", 43, 1, NULL};
	struct student Pascal = {"Pascal", 21, 20, NULL};
	
	start = end = &Joe;
    end = addStudent(end, &Maria);
    end = addStudent(end, &Pascal);
    
	printStudent(start);
	
	
	return 0;

}

void printStudent(struct student * start){
    struct student * ptr;
    ptr = start;
    while(ptr!=NULL){
        printf("%s %d %d\n", ptr->name, ptr->age, ptr->average);
        ptr = ptr->next;
    }
    
}

struct student * addStudent(struct student * end, struct student * newStud){
    end ->next = newStud;
    return(end->next);
    
    
}
