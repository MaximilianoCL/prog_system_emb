#include <stdio.h>

//Design a program that gets all the numbers divisible by 3 and 5

int main (){

    int num;

    printf ("Choose a range from 0 to: \n");
    scanf ("%d", &num);

    printf ("This are the numbers divisible by 3 and 5: \n");

    for (int i = 1; i <= num; i++){

        if (i % 3 == 0 && i % 5 == 0){
            printf ("%d \n", i);
        };
    }

    return 0;
}