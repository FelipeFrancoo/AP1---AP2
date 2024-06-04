1) #include <stdio.h>
#include <stdlib.h>
#include "questao.h"
int main()
{
 int x;
 printf("Digite o valor do exercicio:\n");
 scanf("%d",&x);
 exercicio(x);
}
int exercicio(int d)
{
 switch(d)
 {
 case 1:
 printf("Exercicio 1");
 break;
 case 2:
 printf("Exercicio 2");
 break;
 case 3:
 printf("Exercicio 3");
 break;
 case 4:
 printf("Exercicio 4");
 break;
 case 5:
 printf("Exercicio 5");
 break;
 case 6:
 printf("Exercicio 6");
 break;
 default:
 printf("Não existe");
 break;
 }
}
2) #include <stdio.h>
#include <stdlib.h>
#include "rian.h"
int main()
{
 int x;
 printf("Digite um valor\n");
 scanf("%d",&x);
 printf("%d", positivo(x));
 //positivo(x);
 return 0;
}
int positivo(int a)
{
 if(a>0)
 {
 return 1;
 }
 else
 {
 if(a<0)
 return 0;
 }
}
3) #include <stdio.h>
#include <stdlib.h>
#include "a.h"
int main()
{
 int a, b;
 printf("Digite 2 valores\n");
 scanf("%d", &a);
 scanf("%d", &b);
 printf("Resultado %d", Mdc(a,b));
}
int Mdc(int a, int b){
 int maior, menor;
 int r;
 if(a>b){
 maior = a;
 menor = b;
 }else{
 maior = b;
 menor = a;
 }
 do{
 r = maior % menor;
 if(r!=0){
 maior = menor;
 menor = r;
 }
 }while(r!=0);
 return menor;
}
4) #include <stdio.h>
#include <stdlib.h>
#include "aua.h"
int main()
{
 int valor;
 printf("Escreva um valor\n");
 scanf("%d", &valor);
 printf("Resultado %d", primo(valor));
}
int primo(int valor)
{
 int r =0;
 for(int i=1 ; i<=valor; i++)
 {
 if ((valor%i)==0)
 {
 r++;
 }
 }
 if (r==2){
 return 1;
 }
 else{
 return 0;
 }
}
5) // triangulo.h
#ifndef TRIANGULO_H
#define TRIANGULO_H
// Enumeração para os tipos de triângulos
enum TipoTriangulo {
 INVALIDO,
 EQUILATERO,
 ISOSCELES,
 ESCALENO
};
// Função para verificar e imprimir o tipo de triângulo
int Triangulo(int a, int b, int c);
#endif // TRIANGULO_H
// triangulo.c
#include "triangulo.h"
#include <stdio.h>
int Triangulo(int a, int b, int c) {
 // Verifica se os lados formam um triângulo
 if (a + b > c && a + c > b && b + c > a) {
 // Verifica o tipo de triângulo
 if (a == b && b == c) {
 printf("Triangulo Equilatero\n");
 return EQUILATERO;
 } else if (a == b || a == c || b == c) {
 printf("Triangulo Isosceles\n");
 return ISOSCELES;
 } else {
 printf("Triangulo Escaleno\n");
 return ESCALENO;
 }
 } else {
 printf("Os valores fornecidos nao formam um triangulo.\n");
 return INVALIDO;
 }
}
6) // combinacao.h
#ifndef COMBINACAO_H
#define COMBINACAO_H
// Função para calcular o fatorial de um número
int Fatorial(int valor);
// Função para calcular combinações usando a Equação 1
int Combina(int n, int p);
#endif // COMBINACAO_H
// combinacao.c
#include "combinacao.h"
// Função para calcular o fatorial de um número
int Fatorial(int valor) {
 if (valor == 0 || valor == 1) {
 return 1;
 } else {
 return valor * Fatorial(valor - 1);
 }
}
// Função para calcular combinações usando a Equação 1
int Combina(int n, int p) {
 // Verifica se p é maior que n, nesse caso, a combinação não é válida
 if (p > n) {
 return 0;
 }
 // Calcula o numerador e denominador da Equação 1
 int numerador = Fatorial(n);
 int denominador = Fatorial(p) * Fatorial(n - p);
 // Calcula o resultado final da combinação
 int resultado = numerador / denominador;
 return resultado;
}
6) #include <stdio.h>
#include <stdlib.h>
#include "oo.h"
int main()
{
 int horas;
 printf("Quantas horas voce ficou no estacionamento?\n");
 scanf("%d",&horas );
 printf("O valor é, %.2f", taxa(horas));
}
float taxa(int horas){
 int taxa=2;
 float total;
 total= (taxa + (horas*0,5));
 return total;
}
