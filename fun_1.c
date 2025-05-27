#include <stdio.h>

int cuadrado(int);
void cuadrado1(int);
int cubo(int);

int main(){
    int i;
    for (i = 1; i <= 10; i++){
        printf("Cubo de %d es %d\n",i, cubo(i));
    }
    return 0;
}

int cuadrado(int nro){
    return nro*nro;
}

void cuadrado1(int x){
    printf("Cuadrado de %d es %d\n", x, x*x);
}

int cubo(int x){
    return x * cuadrado(x);
}