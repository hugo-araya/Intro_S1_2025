#include <stdio.h>

void nose(int *);

int main(){
    int dato = 30;
    printf("%d\n", dato); //30
    nose(&dato);
    printf("%d\n", dato);
    return 0;
}

void nose(int *valor){
    *valor = 100;
}