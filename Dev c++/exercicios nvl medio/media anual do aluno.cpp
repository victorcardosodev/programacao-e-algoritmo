#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	system("COLOR 70");
	float M1, M2, M3, M4, MA;
	char NOME [12];
	printf("Digite o nome do aluno\t");
	scanf("%s",&NOME);
	printf("\nDigite a nota do primeiro bimestre.\t");
	scanf("%f",&M1);
	printf("\nDgite a nota do segundo bimestre.\t");
	scanf("%f",&M2);
	printf("\nDigite a nota do terceiro bimestre.\t");
	scanf("%f",&M3);
	printf("\nDigite a nota do quarto bimestre.\t");
	scanf("%f",&M4);
	MA=(M1+M2+M3+M4)/4;
	printf("\na nota do aluno %s é %.1f", NOME,MA);
	return 0;
}
