#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float b, h, res;
	printf("Vamos calcular o valor da área de um retangulo!\n");
	printf("\nDigite o valor de b.\t");
	scanf("%f",&b);
	printf("\nDigite o valor de h.\t");
	scanf("%f",&h);
	res=(b*h);
	printf("\nO valor da área do retangulo é %.1f", res);
	return 0;
}
