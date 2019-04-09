#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float h, r, ab, al, at;
	printf("calculo da area da lata\n");
	printf("\ndigite o raio\t");
	scanf("%f",&r);
	printf("\nDigite a altura\t");
	scanf("%f",&h);
	ab = 3.14*pow(r,2);
	al = 2*3.14*r*h;
	at = 2*ab*al;
	printf("\nA area da lata é %f", at);
	return 0;
}
