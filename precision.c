/*Especificador de precisión*/

#include <stdio.h>
int main (){
    printf("\n\n");
    printf ("%f\n", 123.1234567);
	printf ("%.4f\n", 123.1234567);
    printf ("%9.4f\n", 123.1234567);
    printf ("%11.4f\n", 123.1234567);
    printf ("%9.10f\n", 123.1234567);
	printf ("%3.8d\n", 1000);
	printf ("%10.15s\n","Esta es una prueba sencilla");
    printf("\n\n");
	return 0;
}
