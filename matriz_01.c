#include <stdio.h>

int main(){
    int m[3][4]; /* m es una matriz de 3(filas)x 4(Columnas) enteros */
    int i,j; /* subindices */
    /* inicializa los elementos de m a 0 */
    for ( i = 0; i < 3; i++ ) {
        for(j = 0; j < 4; j++){
            printf("Elemento [%3d][%3d]: ",i, j);
            scanf("%d", &m[i][j]);
        }
    }
    /* muestra el contenido en forma tabular */
    printf( "En Forma Tabular ---->\n" );
    printf( "Elemento Valor\n" );
    for ( i = 0; i < 3; i++ ) {
        for (j = 0; j<4; j++){
            printf("m[%d][%d]= %d\n",i,j,m[ i ][ j ] );
        }
    }
    /* muestra el contenido en forma matricial */
    printf( "En Forma Matricial ---->\n" );
    for ( i = 0; i < 3; i++ ) {
        for (j = 0; j<4; j++){
            printf("%6d",m[ i ][ j ] );
        }
        printf("\n");
    }
    return 0;
}