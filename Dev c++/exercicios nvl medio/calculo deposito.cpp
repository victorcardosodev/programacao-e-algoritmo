#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float x, y, z, a;
	x=500;
	printf("\nO deposito inicial é %f", x);
	y=x+((x/100)*1);
	z=y+((y/100)*1);
	a=z+((z/100)*1);
	printf("\nO saldo após o terceiro mês é %f", a);
	return 0;	
}
