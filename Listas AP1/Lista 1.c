1) // Seção de Declarações das variáveis
 opcao:inteiro
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 leia(opcao)
 escolha(opcao)
 caso 1
 escreval("1")
 caso 2
 escreval("2")
 caso 3
 escreval("3")
 caso 4
 escreval("4")
 caso 5
 escreval("5")
 caso 6
 escreval("6")
 caso 7
 escreval("7")
 caso 8
 escreval("8")
 caso 9
 escreval("9")
 fimescolha
Fimalgoritmo
2) // Seção de Declarações das variáveis 
x:inteiro
y:inteiro
Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
 leia(x,y)
 se((x>0)e(y>0))entao
 escreval("Primeiro Quadrante")
 fimse
 se((x<0)e(y<0))entao
 escreval("Segundo Quadrante")
 fimse
 se((x<0)e(y<0))entao
 escreval("Terceiro Quadrante")
 fimse
 se((x>0)e(y<0))entao
 escreval("Quarto Quadrante")
 fimse
Fimalgoritmo
3) x,y,z:inteiro
 maior,menor,meio:inteiro
 a, b, c:caractere
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 escolha(a)
 caso a
 leia(x)
 leia(y)
 leia(z)
 se((x<y) e (x<z))entao
 menor<-x
 se y<z entao
 meio<-y
 maior<-z
 senao
 meio<-z
 maior<-y
 fimse
 fimse
 se((y<x) e (y<z))entao
 menor<-y
 se (x<z) entao
 meio<-x
 maior<-z
 senao
 meio<-z
 maior<-x
 fimse
 fimse
 se((z<x) e (z<y))entao
 menor<-z
 se x<y entao
 meio<-x
 maior<-y
 senao
 meio<-y
 maior<-x
 fimse
 fimse
 escreval(menor, meio, maior)
 caso b
 leia(x)
 leia(y)
 leia(z)
 se((x<y) e (x<z))entao
 menor<-x
 se y<z entao
 meio<-y
 maior<-z
 senao
 meio<-z
 maior<-y
 fimse
 fimse
 se((y<x) e (y<z))entao
 menor<-y
 se (x<z) entao
 meio<-x
 maior<-z
 senao
 meio<-z
 maior<-x
 fimse
 fimse
 se((z<x) e (z<y))entao
 menor<-z
 se x<y entao
 meio<-x
 maior<-y
 senao
 meio<-y
 maior<-x
 fimse
 fimse
 escreval (maior, meio, menor)
 caso c
 leia(x)
 leia(y)
 leia(z)
 se((x<y) e (x<z))entao
 menor<-x
 se y<z entao
 meio<-y
 maior<-z
 senao
 meio<-z
 maior<-y
 fimse
 fimse
 se((y<x) e (y<z))entao
 menor<-y
 se (x<z) entao
 meio<-x
 maior<-z
 senao
 meio<-z
 maior<-x
 fimse
 fimse
 se((z<x) e (z<y))entao
 menor<-z
 se x<y entao
 meio<-x
 maior<-y
 senao
 meio<-y
 maior<-x
 fimse
 fimse
 escreval(menor, maior, meio)
 fimescolha
Fimalgoritmo
4) // Seção de Declarações das variáveis
 ano:inteiro
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 leia(ano)
 se(ano<0)entao
 escreval("Entrada Inválida")
 fimse
 se(ano>0)entao
 se (ano%4=0)entao
 se ((ano%100<>0) ou (ano%400=0))entao
 escreval("Ano é bissexto")
 senao("Ano não é bissexto")
 fimse
 senao
 escreval("Ano não é bissexto")
 fimse
 senao
 escreval("Não é ano bissexto")
 Fimse
Fimalgoritmo
5) // Seção de Comandos, procedimento, funções, operadores, etc...
 escreval("Qual a altura e o peso respectivamente?")
 leia(altura)
 leia(peso)
 se(altura<1.20)entao
 se(peso<60)entao
 escreval("A")
 senao
 se((peso>=60) e (peso<=90))entao
 escreval("D")
 senao
 se (peso>90)entao
 escreval("G")
 fimse
 fimse
 fimse
 fimse
 se((altura>=1.20) e (altura<=1.70))entao
 se(peso<60)entao
 escreval ("B")
 senao
 se((peso>=60) e (peso<=90))entao
 escreval("E")
 senao
 se(peso>90)entao
 escreval("H")
 fimse
 fimse
 fimse
 fimse
 se(altura>1.70)entao
 se(peso<60)entao
 escreval("C")
 senao
 se((peso>=60) e (peso<=90))entao
 escreval("F")
 senao
 se(peso>90)entao
 escreval("I")
 fimse
 fimse
 fimse
 fimse
 
Fimalgoritmo
6) // Seção de Declarações das variáveis
 saldo:real
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 leia(saldo)
 se(saldo<2000)entao
 escreval("Crédito Negado")
 senao
 se((saldo>2000.01) e (saldo<4000))entao
 saldo<-(saldo*0.20)
 escreval("Seu crédito é igual a" ,saldo, " sendo 20% do total")
 fimse
 fimse
 se((saldo>4000.01) e (saldo<6000))entao
 saldo<-(saldo*0.30)
 escreval("Seu crédito é igual a",saldo," sendo 30% do total")
 fimse
 se(saldo>6000.01)entao
 saldo<-(saldo*0.40)
 escreval("Seu crédito é igual a",saldo," sendo 40% do total")
 fimse
Fimalgoritmo
7) // Seção de Declarações das variáveis
 mes:inteiro
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 escreval("Escolha um numero")
 leia(mes)
 escolha(mes)
 caso 1
 escreval("Janeiro")
 caso 2
 escreval("Fevereiro")
 caso 3
 escreval("Março")
 caso 4
 escreval("Abril")
 caso 5
 escreval("Maio")
 caso 6
 escreval("Junho")
 caso 7
 escreval("Julho")
 caso 8
 escreval("Agosto")
 caso 9
 escreval("Setembro")
 caso 10
 escreval("Outubro")
 caso 11
 escreval("Novambro")
 caso 12
 escreval("Dezembro")
 caso 13
 se(mes>12)entao
 escreval("Valor Invalido")
 fimse
 fimescolha
8) // Seção de Declarações das variáveis
 codigo:inteiro
 quantidade:real
 valor:real
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 leia(codigo)
 leia(quantidade)
 se((quantidade=1) e (codigo=1001))entao
 valor<-5.32
 escreval("5.32")
 fimse
 se((quantidade>1) e (codigo=1001))entao
 valor<-5.32*quantidade
 escreval(valor)
 fimse
 se((quantidade=1) e (codigo=1234))entao
 valor<-6.45
 escreval(valor)
 fimse
 se((quantidade>1) e (codigo=1234))entao
 valor<-6.45*quantidade
 escreval(valor)
 fimse
 se((quantidade=1) e (codigo=6453))entao
 valor<-2.37
 escreval(valor)
 fimse
 se((quantidade>1) e (codigo=6453))entao
 valor<-2.37*quantidade
 escreval(valor)
 fimse
 se((quantidade=1) e (codigo=6400))entao
 valor<-5.32
 escreval(valor)
 fimse
 se((quantidade>1) e (codigo=6400))entao
 valor<-5.32*quantidade
 escreval(valor)
 fimse
 se((quantidade=1) e (codigo=2352))entao
 valor<-6.45
 escreval(valor)
 fimse
 se((quantidade>1) e (codigo=2352))entao
 valor<-6.45*quantidade
 escreval(valor)
 fimse
Fimalgoritmo
9)
