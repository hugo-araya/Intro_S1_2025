#include <stdio.h>

int main(){
    FILE *arch;
    FILE *arch1;
    char carac;
    arch = fopen("string_04.c", "r");
    arch1 = fopen("nose.nose", "a");
    while (!feof(arch)){
        carac = fgetc(arch);
        if (carac == 'o'){
            carac = '#';
        }
        fputc(carac, arch1);
    }
    printf("\n");
    return 0;
}
