  /* 
  Title : Bank Authentication
  Date : April 2026
  Author : H4nr1s3ld0n
  Description : Allows a user to authenticate against hardocded names and passwd 
  Notions : Use of strcmp, creating a dictionnary-like structure
  */



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int authenticate(const char nameInput[], const char password[]);

struct bankAccount {
    char name[30];
    int id;
    int money;
    char secret[30];
    struct bankAccount *next;
};


int main(void) {
    char nameInput[30];
    char password[30];
    
    
    printf("$-$-$-$-$-Welcome to the bank-$-$-$-$\n");
    printf("Name :");
    scanf("%s", nameInput);
    printf("Password :");
    scanf("%s", password);
    
    
    int UserId = authenticate(nameInput, password);
    
    if(UserId == -1){
        
        printf("Authentication failed");
    }
    if(UserId == 1){
        printf("Authentication succeed");
        printf("User ID : %d\n", UserId);
    }
    
    return 0;
}

int authenticate(const char nameInput[], const char password[]){
    struct bankAccount accounts[] = {
	    {"Joe", 1, 1000, "password"},
	    {"Carla", 2, 1000, "password1"},
	    {"Fili", 3, 3000, "password2"},
	    {"Richard", 4, 1552, "password3"}
    };
    int n = sizeof(accounts) / sizeof(accounts[0]);
    int i = 0;
    for(i=0;i<n;i++){
	    if(strcmp(nameInput, accounts[i].name) == 0 && strcmp(password, accounts[i].secret) == 0){
	    
	    return accounts[i].id;
		}
    }
    return -1;
}
