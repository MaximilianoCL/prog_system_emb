#include <stdio.h> //it's just comment

//DataType: 
//Create a variable: dataType anyName; | dataType anyName = 12; //Solo se declara una vez

int myInt = 24; //-> text format: %i, %d
float myFloat = 22.7; //-> text format: %f
char myChar = 'M'; // -> %c
int myArray[7] = { 5, 27, 43, 12, 8, 7, 0 };
                // 0  1   2   3   4  5  6 ...n
float myFloatArray[255] = {1.33, 2.55, 666.1};                
char word[3] = {'M', 'A', 'X'};
char country[10] = "México"; // %s
char* aName = "Maximiliano";  // %s

int main(){

    //Modified ints
    printf("hola clase, myInt = %d\n", myInt);
    myInt = 25;
    printf("hola clase, myInt = %d\n", myInt);
    int yearsOld = 20;
    printf("%d\n",yearsOld);
    printf("%f\n",myFloat);
    printf("%c\n",myChar);
    printf("%d\n",myArray[2]);
    printf("%f\n",myFloatArray[2]);
    printf("%s\n",word);
    printf("%s\n",country);
    printf("%s\n",aName);
    
    return 0;
}