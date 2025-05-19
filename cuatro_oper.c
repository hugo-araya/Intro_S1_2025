#include <stdio.h>
int main(){
	int prim, seg, resul;
	char oper;
	printf("\nPrimer numero: ");
	scanf("%d",&prim);
	printf("\nOperacion a realizar (+, -, *, /): "); 
	scanf(" %c", &oper);
	printf("\nSegundo numero: ");
	scanf("%d",&seg); 
	if(oper == '+')
		resul = prim + seg;	  
	if(oper == '-')	  
		resul = prim - seg;	  
	if(oper == '*')	  
		resul = prim * seg;	 
	if(oper == '/')	 
		resul = prim / seg; 
	printf("\nEl resultado de la operacion %d %c %d es %d", prim, oper, seg, resul);
	return 0;
}
