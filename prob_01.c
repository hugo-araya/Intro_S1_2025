#include <stdio.h>

#define CANTIDAD 10

int main(){
    int n[ CANTIDAD ], sal[10]; // n es un arreglo de 10 enteros
    int i, k, j, l, ok; // contador 
    int tam;

    printf("Cantidad de elemento (< CANTIDAD): ");
    scanf("%d", &tam);
    for ( i = 0; i < tam; i++ ) {
        printf("Ingrese elemento [%2d]: ", i);
        scanf("%d", &n[i]);
    };

    // Ver los repetidos
    k = 0;
    for ( i = 0; i < tam; i++ ) {
        for (j = i+1; j < tam; j++){
            if (n[i] == n[j]){
                l = 0;
                ok = 0;
                while (l < k){
                    if (sal[l] == n[i]){
                        ok = 1;
                    }
                    l++;
                }
                if(ok == 0){
                    sal[k] = n[i];
                    k++;
                }
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
