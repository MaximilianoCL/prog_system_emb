#include <stdio.h>
#include <stdlib.h>

/* 2. Design a program that receives two numbers using argv argument and print the following arithmetical operations: 
add 
substraction
multiplication
division */ 

int main (int argc, char** argv){

    printf("Ingresa tus numeros: %s %s \n",argv[1],argv[2]);

    float number1 = atoi(argv[1]);
    float number2 = atoi(argv[2]);

    int sum = number1 + number2;
    float min = number1 - number2;
    int mult = number1 * number2;
    float div = number1 / number2;

    printf ("The sum of the numbers is: %d\n", sum);
    printf ("The substraction of the numbers is: %f\n", min);
    printf ("The multiplication of the numbers is: %d\n", mult);
    printf ("The division of the numbers is: %f\n", div);

    return 0;
}