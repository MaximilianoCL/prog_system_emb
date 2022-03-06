#include <stdio.h>

int main (int argc, char** argv){

    int a = 10;
    int b = 15;
    int c = 1;
    int d = 8;
    int e = 10;

    _Bool condicion1 = (a > b); //false
    _Bool condicion2 = (c < d); //true
    _Bool condicion3 = (d == a); //false
    _Bool condicion4 = (d != a); //true
    _Bool condicion5 = (a >= e); //true
    _Bool condicion6 = (a >= e); //true
    _Bool condicion7 = (e <= e); //true


    if (condicion1 || condicion5) { 
        //some code 1
        
    }else {
        //some code 2

    }

      if (condicion1 && condicion5) {
        //some code 1
        
    }else {
        //some code 2

    }

    int number1 = 3;
    _Bool isGreaterThanOne = (number1 > 1);

      if (!condicion3) {
        //some code 1
        
    }else {
        //some code 2

    }

      if (!isGreaterThanOne) {
        //some code 1
        
    }else {
        //some code 2

    }

    return 0;
}