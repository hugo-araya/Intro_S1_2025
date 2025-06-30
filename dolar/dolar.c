#include <stdio.h>

void leer_datos(char *, float *);
void grabar_salida(float *);
float calculo_promedio(char *, float*, int);

int main(){
    char fecha[1600]????;
    float valor[1600];
    float promedios[7];
    int agno;
    float promedio;
    leer_datos(fecha, valor);
    for (agno = 2017; agno < 2024; agno++){
        promedio = calculo_promedio(fecha, valor, agno);
        promedios[agno-2017] = promedio;
    }
    grabar_salida(promedios);
    return 0;
}