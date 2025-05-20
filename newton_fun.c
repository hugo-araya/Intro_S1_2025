#include <stdio.h>
// Calculo Raiz Cuadrada
double raiz_cuadrada(double n){
    double x0, x1, difer;
    x0 = n;
    x1 = n + 1;
    difer = x0 - x1;
    if (difer < 0){
        difer = difer * -1;
    }
    while (difer > 0.0001 ){
        x1 = (x0 + n/x0)/2;
        difer = x0 - x1;
        if (difer < 0){
            difer = difer * -1;
        }
        x0 = x1;
    }
    return x1;
}

int main(){
    double n, resultado;
    int cantidad;
    cantidad = 0;
    while (cantidad < 5){
        printf("Ingrese numero: ");
        scanf("%lf", &n);
        if (n > 0){
            resultado = raiz_cuadrada(n);
            printf("La raiz es : %lf\n", resultado);
            // cantidad++;
        }
        else{
            printf("No se puede calcular\n");
        }
        cantidad++;
    }
    return 0;
}

