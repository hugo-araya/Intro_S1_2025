#include<stdio.h>

double raiz_cuadrada(double n);

int main(){
    int datos[10], cantidad, numero;
    int suma;
    float promedio, varianza;
    double desv;
   
   // Esto deberia ser una funcion que captura datos
    cantidad = 0;
    printf("Numero: ");
    scanf("%d", &numero);
    while (numero != 0){
        datos[cantidad] = numero;
        cantidad++;
        printf("Numero: ");
        scanf("%d", &numero);       
    }

    // Deberia ser una funcion que muestra los datos
    for (int i=0; i<cantidad; i++){
        printf("%d\n", datos[i]);
    }

    // Deberia ser una funcion que calcula promedio
    suma = 0;
    for (int i = 0 ; i < cantidad; i++){
        suma = suma + datos[i];
    }
    promedio = suma / cantidad;
    
    // Deberia haber una funcion que calcula la varianza
    varianza = 0;
    for (int i = 0; i < cantidad; i++){
        varianza = varianza + (datos[i] - promedio)*(datos[i] - promedio);
    }
    varianza = varianza / cantidad;

    //Una funcion que calcula la desviacion
    desv = raiz_cuadrada(varianza);

    //Una funcion que muestra el resultado
    printf("Desviacion %lf\n", desv);
    return 0;
}

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
