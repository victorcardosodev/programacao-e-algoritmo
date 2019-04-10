#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
int main(){
	setlocale(LC_ALL, "Portuguese");
	float celsius, kelvin;
	printf("Digite a temperatura em Celsius\n");
	scanf("%f", celsius);
	kelvin = celsius + 273.15;
	printf("O valor de Celsius em Kelvin é %2.2f", kelvin);
	printf("Tecle ENTER ou ESC para sair do DOS\n");
	return 0;
}
