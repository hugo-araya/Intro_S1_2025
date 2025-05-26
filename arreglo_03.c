#include <stdio.h>

#define CANTIDAD 10

int main(){
    int n[ CANTIDAD ], sal[CANTIDAD]; // n es un arreglo de 10 enteros
    int i, k, j; // contador 
    int tam, elemento;

    printf("Cantidad de elemento (< CANTIDAD): ");
    scanf("%d", &tam);

    // Lee los valores de los elemento
    for ( i = 0; i < tam; i++ ) {
        printf("Ingrese elemento [%2d]: ", i);
        scanf("%d", &elemento);
        n[ i ] = elemento; 
    }

    // Ver los repetidos
    k = 0;
    for ( i = 0; i < tam; i++ ) {
        for (j = 0; j < tam; j++){
            if (n[i] == n[j]){
                sal[k] = n[i];
                k++;
            }
        }
    }  

    // muestra el contenido del arreglo n en forma tabular
    printf( "Elemento Valor\n" );
    for ( i = 0; i < tam; i++ ) {
        printf( "%5d%13d\n", i, n[ i ] );
    }

    // muestra el contenido del arreglo repetido n en forma tabular
    printf( "Elemento Valor\n" );
    for ( i = 0; i < k; i++ ) {
        printf( "%5d%13d\n", i, sal[ i ] );
    }
    return 0;
}