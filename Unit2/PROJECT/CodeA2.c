#include <stdio.h>

/*1. Design a C program that asks for a username and its years old. Then, you will need to
check if the user has enough years old to keep in the program.
If the user is less than 18 years old show a warning message.
Otherwise, you will show a welcome message. */

int main (){

    char username [30];
    int age;

    printf ("Introduce your username:\n");
    scanf ("%s", username);

    printf ("Introduce your age:\n");
    scanf ("%d", &age);

    if (age < 18){
        printf ("%s, you can not enter to this site!\n", username);
    }
    else{
        printf ("Welcome %s\n", username);
    }

    return 0;
}