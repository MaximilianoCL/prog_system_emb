#include <stdio.h>

char first_name [250];
char last_name [250];
int age;
char state [250];

int main (){

    printf ("Bienvenido\n");

    printf ("Ingresa tu nombre: \n");
    scanf ("%s", first_name);

    printf ("Ingresa tu apellido: \n");
    scanf ("%s", last_name);

    printf ("Ingresa tu edad: \n");
    scanf ("%d", &age);

    printf ("Ingresa tu Estado: \n");
    scanf ("%s", state);


    return 0;
}