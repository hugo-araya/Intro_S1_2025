#include <stdio.h>

int main( ){
    int expresion, x = 1;
    expresion = ((1 == x));
    printf("%d\n", expresion);
    if (expresion) {
        printf("Verdadero");
    }
    else{
        printf("Falso");
    }
    return 0;
}