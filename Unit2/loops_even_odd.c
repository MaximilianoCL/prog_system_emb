#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (int argc, char** argv){

    printf("For running: %s %s \n", argv[0], argv[1]);

    int number = atoi(argv[1]);


    printf("While running: %s %s \n", argv[0], argv[1]);

    int number1 = atoi(argv[1]);

    bool isDivided = number1%2 == 0;

    while (isDivided != 0){

        printf("Numeros impares: %d",isDivided);
    }

    return 0;
}