#include <stdio.h>


struct date {
        int year;
        int month;
        int day;
    };


void printDate(struct date);
void readDate(struct date *);
struct date advanceDay(struct date); 

int main(void) {
	struct date today, tomorrow;
	readDate(&today);
	printDate(today);
	tomorrow = advanceDay(today);
	printDate(tomorrow);
	return 0;
}

void readDate(struct date *dateptr){
    scanf("%d", &dateptr->year);
    scanf("%d", &dateptr->month);
    scanf("%d", &dateptr->day);
}

void printDate(struct date date){
    printf("%02d/%02d/%02d\n", date.month, date.day, date.year);
}

struct date advanceDay(struct date today){
	int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	
	
    int done = 0;
    if((today.day == 31)&&(today.month == 12)){
        today.day = 1;
        today.month = 1;
        today.year = today.year +1;
        done = 1;
    }
    if(today.day == daysInMonth[today.month]){
        today.day = 1;
        today.month = today.month + 1;
        done = 1;
    }
    if((today.day == 30 || today.day == 31)&&(today.month!=12)){
        today.day = 1;
        today.month = today.month +1;
        today.year = today.year;
        done = 1;
    }
    if(!done){
        today.day = today.day +1;
    }
    return today;
}
