#include <stdio.h>

bool isEvenFunct (int numbertotest){

    printf("Function was excuted\n");
    bool isEven = (numbertotest % 2 == 0);

    if (isEven) return true;

    return false;
}

void swap( int param1, int param2 ){

    int temp = param2;

    param2 = param1;
    param1 = temp;
    
    return;
}

void swapAddress (int* ptr1, int* ptr2){

//operadores de memoria
//& "La direccion de _____"
//*"El valor de la direccion de _____"

    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    return;
}   