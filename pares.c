#include<stdio.h>

/* declaración de funciones, para evitar errores */
int impar(int);
int par(int);

int main(){
    int numero = 3;
    if (par(numero) == 1){
        printf("Numero es par");
    }
    else{
        printf("Numero es impar");
    }
    return 0;
}

int par(int n){
    if (n == 0)
        return 1;
    return impar(n-1);
}

int impar(int n){
    if (n == 0)
        return 0;
    return par(n-1);
}





