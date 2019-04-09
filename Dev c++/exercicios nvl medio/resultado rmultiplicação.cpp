#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 70");
	float x, n, rm, resT;
	printf("calculo da multiplicação (X*N)^2");
	printf("\nDigite o valor de X.\t");
	scanf("%f",&x);
	printf("\nDigite o valor de N.\t");
	scanf("%f",&n);
	rm=(x*n);
	resT=pow(rm,2);
	printf("\nO resultado da multiplicação é %.1f", resT);	
}
