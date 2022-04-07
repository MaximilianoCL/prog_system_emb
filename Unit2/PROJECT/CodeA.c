#include <stdio.h>
#include <stdlib.h>

//Variables, imputs (Argumentos main-Keyboard), Ouput(printf-print)

//1. Design a program that receives a list of numbers using argv argument and print the mean value in the console

int main (int argc, char** argv){

    printf("Ingresa tus numeros: %s %s %s %s %s %s %s\n",argv[1],argv[2],argv[3],argv[4],argv[5],argv[6],argv[7]);

    float number1 = atoi(argv[1]);
    float number2 = atoi(argv[2]);
    float number3 = atoi(argv[3]);
    float number4 = atoi(argv[4]);
    float number5 = atoi(argv[5]);
    float number6 = atoi(argv[6]);
    float number7 = atoi(argv[7]);

    float sum = number1 + number2 + number3 + number4 + number5 + number6 + number7;
    float mean = sum / 7;

    printf ("The mean value of the numbers is: %f\n", mean);

    return 0;
}