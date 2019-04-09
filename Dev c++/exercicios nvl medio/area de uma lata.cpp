#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float r, alt, area;
	printf("Digite o raio de uma lata\t");
	scanf("%f",&r);
	printf("\nDigite a altura de uma lata\t");
	scanf("%f",&alt);
	area=2*(3.14*r*alt);
	printf("\nA área externa de uma lata é %1.f", area);
	return 0;
}
