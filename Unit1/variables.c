#include <stdio.h>

//Data type
//Inter (int), decimales, characters, strings
//DataType varName: DataType varName = anyValue
//Definicion y declaracion, ejecucion/llamado

//Declarar y definir un valor inicial
//Cada tipo de variable tiene un tipo de formato de texto
int temperature = 30;  // %i, %d
float pi = 3.1416; // %f
char initial = 'M'; // %c
char* name = "Maximiliano"; // %s
// Otros formatos de texto
// \n: salto de linea
// \t: tap

int main (){
    printf("Temperature: \t%i \nMi nombre es: \t%s \n", temperature, name);
    //Ejecucion/llamado
    temperature = 15;


    return 0;
}