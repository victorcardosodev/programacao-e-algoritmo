#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float  a, b, c, del, x1, x2;
	printf("Equação do segundo grau");
	printf("\nDigite um valor para A\t");
	scanf("%f",&a);
	printf("\ndigite um valor para B\t");
	scanf("%f",&b);
	printf("\nDigite um valor para C\t");
	scanf("%f",&c);
	del=pow(b,2)-(4*a*c);
	x1=sqrt(-b+del)/2*a);
	x2=sqrt(-b-del)/2*a);
	printf("\nO valor de X1 é %f, e o valor de X2 é %f", x1, x2);
	return 0;
} 
