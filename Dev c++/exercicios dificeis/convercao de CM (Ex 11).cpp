#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float mt, dc, cm, mm;
	printf("digite uma medida em CM \t" );
	scanf("%f",&cm);
	mt=cm/100;
	dc=cm/10;
	mm=cm*10;
	printf("\nHá %.1f metros na medida informada", mt);
	printf("\nHá %.1f decimetros na medida informada", dc);
	printf("\nHá %.1f milimetros na medida informada", mm);
	return 0;
}

	
