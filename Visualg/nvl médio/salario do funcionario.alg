algoritmo "salario do funcionario"
// Função :
// Autor :
// Data : 10/01/2019
// Seção de Declarações 
var
nome: caractere
VB,VL,VH,HTM,D :real  //(vb) valor bruto// //(vl) valor liquido // //(vh) valor hora //
//(htm) horas trabalhadas no mês // // (d) dependentes //

inicio
escreval("calculando o valor (bruto e liquido) do salario dos funcionarios")
escreval("digite o nome do funcionario")
leia(nome)
escreval("digite quanto o funcionario recebe por horas trabalhadas")
leia(vh)
escreval("quantas horas ele trabalha por mês")
leia(htm)
escreval("quantos dependentes tem o funcionario")
leia(d)
vb<-(vh*htm)
vl<-(d*300)+vb
escreval("o salario bruto do funcionario:" ,nome, " é",vb, " e o salario liquido:",vl)
// Seção de Comandos
fimalgoritmo
