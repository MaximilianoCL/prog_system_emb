#include <stdio.h>

int main (int argc, char** argv){

    int myVar = 25;
    //          tam
    
    float alturas [4] = {1.70, 1.80, 1.50, 1.60}; // len = 4, 0 =
    //            index   0      1    2      3
    //Leer info de arreglo

    int img[3][3] = {
                        {255, 0, 255};
                        {0, 255, 0};
                        {0, 255, 0};
    
                    };

    printf("El valor de arr[2]: %f\n", alturas[2]);

    return 0;
}