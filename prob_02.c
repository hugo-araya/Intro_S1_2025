#include <stdio.h>

#define CANTIDAD 10

void lee_datos(int [], int);
void muestra_datos(int [], int);
void proceso(int arr1[], int tam, int arr2[], int k);

int main(){
    int n[ CANTIDAD ], sal[10]; // n es un arreglo de 10 enteros
    int i, k, j, l, ok; // contador 
    int tam;
    printf("Cantidad de elemento (< CANTIDAD): ");
    scanf("%d", &tam);

    lee_datos(n, tam);
    proceso(n, tam, sal, k);
    muestra_datos(n, tam);
    muestra_datos(sal, k);
    return 0;
}

void lee_datos(int vector[], int tam){
    int i;
    for ( i = 0; i < tam; i++ ) {
        printf("Ingrese elemento [%2d]: ", i);
        scanf("%d", &vector[i]);
    };
}

void muestra_datos(int vector[], int tam){
    int i;
    printf( "Elemento Valor\n" );
    for ( i = 0; i < tam; i++ ) {
        printf( "%5d%13d\n", i, vector[ i ] );
    }
}

void proceso(int arr1[], int tam, int arr2[], int k){
    int  i, j, l, ok;
    k = 0;
    for ( i = 0; i < tam; i++ ) {
        for (j = i+1; j < tam; j++){
            if (arr1[i] == arr1[j]){
                l = 0;
                ok = 0;
                while (l < k){
                    if (arr2[l] == arr1[i]){
                        ok = 1;
                    }
                    l++;
                }
                if(ok == 0){
                    arr2[k] = arr1[i];
                    k++;
                }
            }
        }
    }  
}