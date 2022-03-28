#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../MyFunctions.h"

bool isEvenFunct (int numbertotest);

int main (int argc, char ** argv){

    //par o impar

    bool isEven = isEvenFunct (2);
    printf("result = %d\n", isEven);
    int varA = 5;
    int varB = 7;
    ////////////////
    // varA = 7, varB = 5

    printf("before function varA = %d, varB = %d\n", varA, varB);
    //swap (varA, varB)
    //swap (5, 7)
    //function using address in arguments
    swapAddress(&varA, &varB);
    printf("after function varA = %d, varB = %d\n", varA, varB);


    return 0;
}
