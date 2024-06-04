1) atividade:real
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 atividade<-0
 enquanto (atividade>=0) faca
 escreval(" Digite qual atividade deseja executar")
 leia(atividade)
 escolha(atividade)
 Caso 1
 escreva("Tarefa 1")
 Caso 2
 escreva("Tarefa 2")
 Caso 3
 escreva("Tarefa 3")
 outrocaso
 escreval("Inválido")
 fimescolha
 fimenquanto
Fimalgoritmo
2) a,op:inteiro
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 op<-1
 enquanto (op>0) faca
 escreval("Você quer contar até 10, 100 ou 1000?")
 leia(op)
 escolha(op)
 caso(1)
 a<-1
 enquanto (a<=10) faca
 escreval(a)
 a<-a+1
 fimenquanto
 caso(2)
 a<-1
 enquanto (a<=100) faca
 escreval(a)
 a<-a+1
 fimenquanto
 caso(3)
 a<-1
 enquanto (a<=1000) faca
 escreval(a)
 a<-a+1
 fimenquanto
 outrocaso
 escreval("Valor Inválido")
 fimescolha
 fimenquanto
Fimalgoritmo
3) a,b:inteiro
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 escreval("Quantos pares vc quer?")
 leia(a)
 b<-0
 enquanto (b<>a) faca
 b<-b+1
 escreval (b*2)
 fimenquanto
4) // Seção de Declarações das variáveis
 a,b,c,d:real
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 a<-1
caso(1)
 escreval("Escreva qnts valores quiser")
 enquanto (a>=0) faca
 leia(a)
 se(a>=0)entao
 b<-b+1
 d<-a+d
 fimse
 fimenquanto
 d<-d/b
 escreval(d)
5) 
6) // Seção de Declarações das variáveis
 soma,final:real
 a,b:inteiro
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 escreval("Digite um valor")
 leia(b)
 a<-1
 enquanto (b>0) e (a<=b) faca
 soma<-1/a
 escreval(soma)
 a<-a+1
 final<-soma+final
 fimenquanto
 escreval(final)
7) aluno:real
 nota:real
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 aluno<-1
 enquanto (aluno<=5) faca
 escreval("Digite a nota do aluno")
 leia(nota)
 se(nota<0)entao
 escreval("Nota Invalida")
 senao
 se(nota<5)entao
 escreval("O conceito do", aluno, " é D")
 senao
 se(nota<7)entao
 escreval("O conceito do", aluno, " é C")
 senao
 se(nota<9)entao
 escreval("O conceito do", aluno, " é B")
 senao
 se(nota>9)entao
 escreval("O conceito do", aluno, " é A")
 fimse
 fimse
 fimse
 fimse
 aluno<- aluno+1
 Fimenquanto
8a) 
