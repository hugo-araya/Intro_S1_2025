#include<stdio.h>

int tres(int );

int main(){
    int largo, inicio, fin, i, mayor;
    FILE *ent, *sal;
    ent = fopen("numeros.txt", "r");
    sal = fopen("num_salida.txt", "w");
    while (!feof(ent)){
        fscanf(ent, "%d", &inicio);
        fscanf(ent, "%d", &fin);
        mayor = 0;
        i = inicio;
        while (i < fin){
            largo = tres(i);
            if (largo > mayor){
                mayor = largo;
            }
            //printf("%d : %d\n", i, largo);
            i = i + 1;
        }
        fprintf(sal, "%d %d %d\n", inicio, fin, mayor);
    }
    largo = tres(1);
    //printf("%d\n", largo);
    return 0;
}

int tres(int n){
    int contador = 1;
    while (n != 1){
        if (n%2 == 0){
            n = n / 2;
        }
        else{
            n = 3*n + 1;
        }
        contador++;
    }
    return contador;
}