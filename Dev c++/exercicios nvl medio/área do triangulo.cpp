#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float b, h, res;
	printf("Vamos calcular o valor da �rea de um triangulo!\n");
	printf("\nDigite o valor de b.\t");
	scanf("%f",&b);
	printf("\nDigite o valor de h.\t");
	scanf("%f",&h);
	res=(b*h)/2;
	printf("\nO valor da �rea do triangulo � %.1f", res);
	return 0;
}
