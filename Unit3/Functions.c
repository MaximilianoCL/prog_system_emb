#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "../MyFunctions.h"

bool isEvenFunct (int numbertotest);

int main (int argc, char ** argv){

    //par o impar

    bool isEven = isEvenFunct (2);
    printf("result = %d\n", isEven);


    return 0;
}

