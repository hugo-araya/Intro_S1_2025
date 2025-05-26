#include <stdio.h>

#define CANTIDAD 10

int main(){
    int n[ CANTIDAD ]; // n es un arreglo de 10 enteros
    int i; // contador 
    int tam, elemento, suma;

    printf("Cantidad de elemento (< CANTIDAD): ");
    scanf("%d", &tam);

    // Lee los valores de los elemento
    for ( i = 0; i < tam; i++ ) {
        printf("Ingrese elemento: ");
        scanf("%d", &elemento);
        n[ i ] = elemento; 
    }

    // Calcula la suma de los elementos ingresados
    suma = 0;
    for ( i = 0; i < tam; i++ ) {
        suma = suma + n[i];
    }  

    // muestra el contenido del arreglo n en forma tabular
    printf( "Elemento Valor\n" );
    for ( i = 0; i < tam; i++ ) {
        printf( "%5d%13d\n", i, n[ i ] );
    }

    // Muestra el valor de la suma de los elementos
    printf("            ------\n%18d\n", suma); 
    return 0;
}