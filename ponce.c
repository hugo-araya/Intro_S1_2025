#include <stdio.h>
#include <string.h>

int main(){
    char nombre[31];
    char opcion = 's';
    FILE *arch;
    arch = fopen("nombre.dat", "w");
    printf("Ingrese el nombre: ");
    fgets(nombre, sizeof(nombre), stdin);
    nombre[strcspn(nombre, "\n")] = '\0';
    fprintf(arch, "%s\n", nombre);
    printf("Desea continuar s/n : ");
    scanf(" %c", &opcion);
    while (opcion != 'n'){
        printf("Ingrese el nombre: ");
        fgets(nombre, sizeof(nombre), stdin);
        nombre[strcspn(nombre, "\n")] = '\0';
        fprintf(arch, "%s\n", nombre);
        printf("Desea continuar s/n : ");
        scanf(" %c", &opcion);
    }

    fclose(arch);
    return 0;
}
