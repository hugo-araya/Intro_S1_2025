#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float leer_datos(char *, float *);
void grabar_salida(float *);
float calculo_promedio(char *, float*, int);

int main(){
    char fecha[1600];
    float valor[1600];
    float promedios[7];
    int agno;
    float promedio;
    promedio = leer_datos(fecha, valor);
/*    for (agno = 2017; agno < 2024; agno++){
        promedio = calculo_promedio(fecha, valor, agno);
        promedios[agno-2017] = promedio;
    }
    //grabar_salida(promedios);
*/
    printf("Promedio: %f\n", promedio);
    return 0;
}

float leer_datos(char *, float *){
    FILE *ent;
    char linea[100];
    char valor[20];
    int i, j, cont = 0, acum = 0;
    float numero;
    ent = fopen("dolar.txt", "r");
    fgets(linea, 20, ent);
    while (!feof(ent)){
        for (i = 0; i < 100; i++){
            if (linea[i] == '\n'){
                linea[i] = '\0';
            }
        }
        for (i = 0; i < 100; i++){
            if (linea[i] == ' '){
                j = 0; 
                while (linea[i] != '\0'){
                    valor[j] = linea[i+1];
                    j++;
                    i++;
                }
                linea[j] = '\0';
                break;
            }
        }
        numero = strtof(valor, NULL);
        printf("%f\n", numero);
        acum = acum + numero;
        cont = cont + 1;
        fgets(linea, 20, ent);       
    }
    return acum/cont;
}