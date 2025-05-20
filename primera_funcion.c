#include<stdio.h>

double valor_abs(double);

int main(){
    double y, z;
    y = -30.8;
    z = valor_abs(y) + y * y;
    printf("z = %lf\n", z);
    printf("numero = %lf\n", valor_abs(100));
    printf("numero = %lf\n", valor_abs(-100));
    return 0;
}

double valor_abs(double x){
    double abs;
    if (x < 0){
        abs = -x;
    }
    else{
        abs = x;
    }
    return abs;
}