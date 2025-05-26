#include <stdio.h>

#define CANTIDAD 10

int main(){
    int n[ CANTIDAD ]; /* n es un arreglo de 10 enteros */
    int i; /* contador */
    int tam;
    printf("Cantidad de elemento (< CANTIDAD): ");
    scanf("%d", &tam);
    /* inicializa los elementos n a 0 del arreglo */
    for ( i = 0; i < tam; i++ ) {
        n[ i ] = 0; /* establece el elemento i-esimo a 0 */
    }
    printf( "Elemento Valor\n" );
    /* muestra el contenido del arreglo n en forma tabular */
    for ( i = 0; i < tam; i++ ) {
        printf( "%5d%13d\n", i, n[ i ] );
    }
    return 0;
}