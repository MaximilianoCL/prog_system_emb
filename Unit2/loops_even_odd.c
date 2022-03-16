#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main (int argc, char** argv){

    int counter = 0;

    for (counter = 2 ; counter <= 10; counter += 2){
        printf ("For running: %d\n", counter);
    }
    
    counter = 1;
    while (counter <= 5){
        printf ("While running: %d\n", counter);
        counter += 2;
    }

    printf("\n");
    
    return 0;
 
    
}