#include <stdio.h>

int main(){
    double n, x0, x1, difer;
    int i;
    printf("Ingrse numero: ");
    scanf("%lf", &n);
    x0 = n;
    while (i < 100){
        x1 = (x0 + n/x0)/2;
        x0 = x1;
        i = i + 1;
    }
    printf("La raiz es : %lf\n", x1);
    return 0;
}