algoritmo "semnome"
// Função :
// Autor :
// Data : 25/03/2019
// Seção de Declarações 
var
SN,SA,PA,VA: real
inicio
escreval("digite o valor do salario atual do funcionario")
leia(SA)
escreval("percentual de aumento")
leia(PA)
SN<-(SA+(SA*PA/100))
escreval("o valor do novo salario do funcionario é" ,SN)
VA<-(SN-SA)
escreval("o valor do aumento é" ,VA)

// Seção de Comandos 
fimalgoritmo
