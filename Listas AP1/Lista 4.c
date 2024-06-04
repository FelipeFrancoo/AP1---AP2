1) exe:inteiro
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 repita
 escreval("Escolha um exercicio da lista")
 leia(exe)
 se(exe=1)entao
 escreval("Exercicio 1")
 fimse
 se(exe=2)entao
 escreval("Exercicio 2")
 fimse
 se(exe=3)entao
 escreval("Exercicio 3")
 fimse
 se(exe=4)entao
 escreval("Exercicio 4")
 fimse
 se(exe=5)entao
 escreval("Exercicio 5")
 fimse
 ate(exe<0)
Fimalgoritmo
2) valor:inteiro
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 para valor de 1 ate 100 faca
 escreval(valor)
 fimpara
Fimalgoritmo
3) // Seção de Declarações das variáveis
 valor:inteiro
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 para valor de 101 ate 200 passo 2 faca
 escreval(valor)
 fimpara
Fimalgoritmo
4) soma,valor:inteiro
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 soma<-0
 para valor de 3 ate 100 faca
 escreval(valor)
 se(valor%2=0)entao
 soma<-soma+valor
 fimse
 fimpara
 escreval("A soma é",soma)
Fimalgoritmo
5) // Seção de Declarações das variáveis
 soma,valor:inteiro
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 soma<-0
 para valor de 1 ate 500 faca
 escreval(valor)
 se(valor%3=1)entao
 soma<-soma+valor
 fimse
 fimpara
 escreval("A soma é",soma)
Fimalgoritmo
6) // Seção de Declarações das variáveis
 a,b,i,r:inteiro
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 r<-1
 escreval("Digite um valor")
 leia(a)
 escreval("Digite outro valor")
 leia(b)
 para i de 1 ate b faca
 r<-r*a
 fimpara
 escreval(r)
Fimalgoritmo
7) a,b,c,i:inteiro
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 escreval("Digite o valor das alturas")
 c<-1000
 para i de 1 ate 5 faca
 leia(a)
 se (a>b)entao
 b<-a
 fimse
 se (a<c)entao
 c<-a
 fimse
 fimpara
 escreval(b)
 escreval(c)
Fimalgoritmo
8) i,n:inteiro
 a,q:real
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 escreval("Digite o valor de a")
 leia(a)
 escreval("Digite o valor de q")
 leia(q)
 escreval("Digite o valor de n")
 leia(n)
 para i de 1 ate n faca
 a<- a * q^(i-1)
 escreval(a)
 fimpara
Fimalgoritmo
9) n,i:inteiro
 r:real
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 escreval("Digite N")
 leia(n)
 para i de 5 ate n faca
 r<-r+(2*i^2+5*i+3)
 fimpara
 escreval(r)
Fimalgoritmo
10) n,a,b,c, aux:inteiro
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 leia(n)
 a<-0
 b<-1
 para c de 1 ate n faca
 aux <- a+b
 a<-b
 b<-aux
 fimpara
 escreval(a)
Fimalgoritmo
11) // Seção de Declarações das variáveis
 a,n,i:inteiro
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 escreval("Digite um numero")
 leia(n)
 para a de 1 ate n faca
 para i de 1 ate a faca
 escreva ("*")
 fimpara
 escreval("")
 fimpara
Fimalgoritmo
