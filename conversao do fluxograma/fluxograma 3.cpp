#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float a,quad;
	printf("digite o valor de um dos lados do quadrado.");
	scanf("%f", &a);
	quad = a*a;
	printf("A are� do quadrado � %f", quad);
	return 0;
}
