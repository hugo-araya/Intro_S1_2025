#include <stdio.h>

int main(){
    FILE *arch;
    char leido[20];
    arch = fopen("promedio.c", "r");
    printf("Ingrese un nombre: ");
    fgets(leido, 20, stdin);
    printf("Leido: %s\n", leido);
    fclose(arch);
    return 0;
}