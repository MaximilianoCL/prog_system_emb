#include <stdio.h>

int main(){

    int n1, n2, n3;

    printf ("Enter three DIFFERENT numbers:\n");
    scanf("%d", &n1);
    scanf("%d", &n2);
    scanf("%d", &n3);

    if(n1 > n2){
        if (n1 > n3){
            printf("The greates value is: %d\n", n1);
        }
    }
    else{
        if (n2 > n3){
            printf ("The greates value is: %d\n", n2);
        }
        else{
            printf("The greates value is: %d\n", n3);
        }
    }

    return 0;
}