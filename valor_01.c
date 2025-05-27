#include <stdio.h>

void nose(int );

int main(){
    int x = 10;
    printf("Valor: %d\n", x); // 10
    nose(x);
    printf("Valor: %d\n", x); // 10
    return 0;
}

void nose(int x){
    x = 20;
    printf("Valor: %d\n", x); // 20
}