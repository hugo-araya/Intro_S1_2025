#include <stdio.h>
#include <string.h>
#define largo 5

int main(){
    char *pais[largo] = {"Alemania", "Argentina", "Brasil", "China", "Chile"};
    char *capital[largo] = {"Berlin", "Buenos Aires", "Brasilia", "Beijing", "Santiago"};
    int i;
    char *nacion;
    char nacion1[10];
/*
    for (i = 0 ; i < largo; i++){
        printf("%s\n", pais[i]);
    }
*/
    printf("Ingrese el pais a consultar: ");
    fgets(nacion, 10, stdin);
    for (i = 0; i < strlen(nacion); i++){
        if (nacion[i] != '\n'){
            nacion1[i] = nacion[i];
        }
    }
    printf("%s %d\n", nacion, strlen(nacion));
    printf("%s %d\n", nacion1, strlen(nacion1));
    for (i = 0; i < largo; i++){
        printf("i: %d\n", i);
        printf("C: %d\n", strcmp(pais[i], nacion1));
        if (strcmp(pais[i], nacion1) == 0){
            printf("%s su capital es %s\n", nacion1, capital[i]);
        }
    }
    return 0;
}