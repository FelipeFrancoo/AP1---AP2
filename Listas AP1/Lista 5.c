1a) v: vetor [1 .. 6] de inteiro
Inicio
 v[1] <-1
 v[2]<-0
 v[3]<-5
 v[4]<--2
 v[5]<--5
 v[6]<-7
Fimalgoritmo
b) v: vetor [1 .. 6] de inteiro
Inicio
 v[1] <-1
 v[2]<-0
 v[3]<-5
 v[4]<--2
 v[5]<--5
 v[6]<-7
 escreval(v[1]+v[2]+v[5])
Fimalgoritmo
c) v: vetor [1 .. 6] de inteiro
Inicio
 v[1] <-1
 v[2]<-0
 v[3]<-5
 v[4]<-100
 v[5]<--5
 v[6]<-7
Fimalgoritmo
d) v: vetor [1 .. 6] de inteiro
Inicio
 v[1] <-1
 v[2]<-0
 v[3]<-5
 v[4]<--2
 v[5]<--5
 v[6]<-7
 escreval(v[1])
 escreval(v[2])
 escreval(v[3])
 escreval(v[4])
 escreval(v[5])
 escreval(v[6])
Fimalgoritmo
2) v:vetor[1..5] de inteiro
 i:inteiro
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 para i de 1 ate 5 faca
 leia(v[i])
 fimpara
 escreval("Ordem direta")
 para i de 1 ate 5 faca
 escreval (v[i])
 fimpara
 escreval("Ordem inversa")
 para i de 5 ate 1 passo -1 faca
 escreval (v[i])
 fimpara
Fimalgoritmo
3) v,f: vetor [1 .. 10] de inteiro
 i,u:inteiro
Inicio
 para i de 1 ate 10 faca
 leia(v[i])
 fimpara
 limpatela
 u<-10
 para i de 1 ate 10 faca
 f[i]<-v[u]
 u<-u-1
 escreval (f[i])
 fimpara
Fimalgoritmo 
4) v,f:vetor[1..5]de inteiro
 i:inteiro
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 para i de 1 ate 10 faca
 leia(v[i])
 se (v[i]%2 =0)entao
 f[i]<-v[i]
 fimse
 fimpara
 escreval("Os pares são")
 para i de 1 ate 10 faca
 escreval(f[i])
 fimpara
Fimalgoritmo
5) v:vetor[1..5]de inteiro
 i:inteiro
 maior, menor:inteiro
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 maior <- -100
 menor <- 100
 para i de 1 ate 5 faca
 leia(v[i])
 se (maior<v[i])entao
 maior<-v[i]
 fimse
 se(menor>v[i])entao
 menor<-v[i]
 fimse
 fimpara
 escreval(maior)
 escreval(menor)
6) v:vetor[1..5]de inteiro
 i:inteiro
 soma:inteiro
 media:real
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 para i de 1 ate 5 faca
 leia(v[i])
 fimpara
 para i de 1 ate 5 faca
 soma<-v[i]+soma
 fimpara
 media<-soma/5
 escreval(media)
Fimalgoritmo
7) f,v:vetor[1..7]de inteiro
 i,a:inteiro
 soma:inteiro
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 a<-1
 para i de 1 ate 7 faca
 leia (v[i])
 se(v[i]<0)entao
 f[a]<-v[i]
 a<-a+1
 senao
 soma<-soma+v[i]
 fimse
 fimpara
 para i de 1 ate 7 faca
 escreval(f[i])
 fimpara
 escreval(soma)
Fimalgoritmo
8) v:vetor[1..5]de inteiro
 i:inteiro
 maior,menor,soma:inteiro
 media:real
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 para i de 1 ate 5 faca
 leia (v[i])
 maior<-v[1]
 menor<-v[1]
 se(maior<v[i])entao
 maior<-v[i]
 fimse
 se(menor>v[i])entao
 menor<-v[i]
 fimse
 soma<-v[i]+soma
 fimpara
 media<-soma/5
 escreval(media)
 escreval(maior)
 escreval(menor)
9) v,d:vetor[1..6]de inteiro
 i,a:inteiro
 f:vetor[1..6]de real
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 para i de 1 ate 6 faca
 leia(a)
 se(a>0)entao
 v[i]<-a
 fimse
 se(a%2=0)entao
 f[i]<-a/2
 senao
 d[i]<-a*3
 fimse
 fimpara
 escreval(v[i])
 escreval(f[i])
 escreval(d[i])
Fimalgoritmo
10) // Seção de Declarações das variáveis
 v,f:vetor[1..10]de inteiro
 i,a:inteiro
Inicio
 // Seção de Comandos, procedimento, funções, operadores, etc...
 para i de 1 ate 10 faca
 leia(v[i])
 f[i]<-v[i]
 fimpara
 enquanto (a<=10) faca
 para i de 1 ate 10 faca
 se (f[a]=v[i]) entao
 escreval(f[a])
 fimse
 fimpara
 fimenquanto
Fimalgoritmo
11)
