#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float seg, hor, min;
	printf("Digite um valor em segundos\t");
	scanf("%f",&seg);
	min=seg/60;
	hor=min/60;
	printf("\no valor de %0.f segundos em minutos � %2.f", seg, min);
	printf("\no valor de %0.f segundos em horas � %2.f", seg, hor);
	return 0;
}
