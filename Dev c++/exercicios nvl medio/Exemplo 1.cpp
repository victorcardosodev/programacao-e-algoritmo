#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR D5");
	int N1, N2, Res;
	printf("\nAlgoritmo para calcular a soma de dois n�meros.\n\n");
	printf("\ndigite o primeiro n�mero:\t");
	scanf("%d", &N1);
	printf("digite o segundo n�mero:\t");
	scanf("%d", &N2);
	Res=N1+N2;
	printf("O resultado da soma �: %d", Res);
	return 0;
}
