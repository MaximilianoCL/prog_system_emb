#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (int argc, char** argv){

    printf("Ingresa un numero: %s %s \n", argv[0], argv[1]);

    int number = atoi(argv[1]);
    bool isDivided = number%2 == 0;

    if (isDivided){
        printf("El numero es par \n");
    }

    else {
        printf("El numero es impar \n");
    }

    
    return 0;
    
}