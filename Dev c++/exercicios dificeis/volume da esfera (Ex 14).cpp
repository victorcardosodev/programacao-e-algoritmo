#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float r, vol;
	printf("Digite o raio de uma esfera\t");
	scanf("%f",&r);
	vol=4/3*(3.14*(pow(r,3)));
	printf("\nO volume da esfera � %2.f", vol);
	return 0;
}
