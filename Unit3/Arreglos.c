#include <stdio.h>
#include <stdbool.h>

int main (int argc, char ** argv){

    int myArray[]= {3,1,2};
    int SIZE = 3;
    int j, newArray;

    int i = 1;

    if (i < SIZE){
        if ( i < SIZE - 1){
            islessThan = myArray[i] < myArray[i+1];
            if (islessThan){

               swap(myArray[i+1], myArray[i]);

                i++;
            };
        }
        else {
            i++;
        }
    }
    else {
        printf ("Orden: %d\n", myArray);
    }

    return 0;
}
