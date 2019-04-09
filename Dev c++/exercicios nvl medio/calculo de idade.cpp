#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int an, aa, ia, ifut;
	printf("Digite o ano de seu nascimento.\t");
	scanf("%d",&an);
	printf("\nDigite o ano atual.\t");
	scanf("%d",&aa);
	ia=aa-an;
	printf("\nAtualmente sua idade é %d", ia);
	printf("\nAgora vamos saber quantos anos você terá em 2050.");
	ifut=2050-an;
	printf("\nEm 2050 sua idade será %d", ifut);
	return 0;
}
