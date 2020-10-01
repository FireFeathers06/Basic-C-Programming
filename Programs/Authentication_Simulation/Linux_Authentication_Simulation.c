// gcc q3.c -lcrypt -o a.out

//Program to simulate Linux Password System using crypt

#define _XOPEN_SOURCE
#include <crypt.h>
#include <stdio.h>  
#include <fcntl.h> 
#include <unistd.h> 
#include <string.h>
#include <stdlib.h>

char buffer [100];
#define STRLGTH 30
#define salt "ljawe9238ioe" //This can be changed to literally anything

void validateCredent(char user[STRLGTH], char pass[STRLGTH])
{ // function to check credentials

    int found = 0;
    char usrnm[STRLGTH];
    char pwd[STRLGTH];

    FILE *fptr;

    if ((fptr = fopen("credentials.txt", "r")) == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }
    while (!feof(fptr)) { 

        if (buffer != fgets(buffer, 100, fptr)){
            break;
        }

        int len = strlen(buffer);
        if (buffer[len - 1] == '\n'){
            buffer[len - 1] = '0';
        }
        
        char * token = strtok(buffer, ":");
        if(strcmp(token, user) == 0){
            token = strtok(NULL, ":");
            if(strcmp(strcat(crypt(pass, salt), "0"), token) == 0){
                printf("Welcome %s!\n", user);
                found =1;
            }
        }

    }
    fclose(fptr);

    if (found == 0)
    {
        printf("Wrong Credentials!!\n");
    }
}

void newCredent(char user[STRLGTH], char pass[STRLGTH])
{// Function to add a new credential
    FILE *fptr;
    fptr = fopen("credentials.txt", "a");
    fprintf(fptr, "%s", strcat(strcat(strcat(user, ":"), crypt(pass, salt)), "\n"));
    fclose(fptr);
    printf("Successfully recorded!");
}

void display()
{
    int choice;

    printf("\tMENU\n");
    printf("1) Enter New Credentials\n");
    printf("2) Validate Credentials\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);

    while (!(choice == 1 || choice == 2))
    {
        printf("Invalid Choice!!\n");
        printf("\tMENU\n");
        printf("1) Enter New Credentials\n");
        printf("2) Validate Credentials\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);
    }

    char user[STRLGTH];
    char dummy[1];

    printf("Input Username: ");
    scanf("%s", user);

    char pass[STRLGTH];
    printf("Input Password: ");
    scanf("%s", pass);

    if (choice == 1)
    {
        newCredent(user, pass);
    }
    else
    {
        validateCredent(user, pass);
    }
}

int main()
{
    printf("Hello World\n");
    display();

    return 0;
}
