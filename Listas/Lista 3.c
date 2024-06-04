• 1) Em linguagens estruturadas, como a Linguagem C, uma sub-rotina, também conhecida 
como função ou módulo, é um bloco de código que realiza uma tarefa específica. Essa tarefa 
pode ser qualquer coisa, desde uma operação matemática simples até uma operação mais 
complexa que envolva várias etapas.
• Reutilização de Código: Uma vez que você tenha escrito uma função para 
realizar uma tarefa específica, você pode reutilizá-la em diferentes partes do 
programa sem ter que reescrever o código.
• Facilidade de Manutenção: O código é mais fácil de manter e entender, pois as 
funções isolam a lógica de negócios em blocos menores e autônomos.
• Divisão do Trabalho: Diferentes desenvolvedores podem trabalhar em funções 
separadas, facilitando o trabalho em equipe.
• Modularidade: O código é dividido em módulos, facilitando a compreensão e a 
resolução de problemas.
2) Uma variável local em programação refere-se a uma variável que é declarada dentro de um 
escopo específico, como uma função, bloco condicional ou loop. Essa variável só é acessível 
dentro desse escopo e não pode ser utilizada fora dele.
def exemplo_funcao(): 
variavel_local = 10 print("Dentro da função:", variavel_local)
3) Uma variável global é uma variável que é declarada fora de qualquer função em um programa 
e pode ser acessada e modificada por qualquer parte do código. Isso significa que ela tem um 
escopo global, o que permite seu uso em diferentes partes do programa.
# Declaração de uma variável global
variavel_global = 10
def funcao_exemplo():
 # Acessando a variável global dentro da função
 print("Dentro da função:", variavel_global)
funcao_exemplo()
variavel_global = 20
print("Fora da função:", variavel_global)
4) #include <stdio.h>
#include "parimpar.h"
int main() {
 // Solicitar ao usuário para inserir um número
 printf("Digite um numero: ");
 scanf("%d", &numero);
 // Chamar a função para verificar se é par ou ímpar
 int resultado = verificarParOuImpar();
 // Exibir o resultado
 if (resultado == 1) {
 printf("O numero %d eh impar.\n", numero);
 } else {
 printf("O numero %d eh par.\n", numero);
 }
 return 0;
}
5) #ifndef OPERACOES_MATEMATICAS_H
#define OPERACOES_MATEMATICAS_H
extern int x, y; // Variáveis globais
int somar();
int subtrair();
int multiplicar();
float dividir();
#endif
#include "operacoes_matematicas.h"
int x, y;
int somar() {
 return x + y;
}
int subtrair() {
 return x - y;
}
int multiplicar() {
 return x * y;
}
float dividir() {
 if (y != 0) {
 return (float)x / y;
 } else {
 return -1; // Indicando erro de divisão por zero
 }
}
#include <stdio.h>
#include "operacoes_matematicas.h"
int main() {
 // Leitura das variáveis
 printf("Digite o valor de x: ");
 scanf("%d", &x);
 printf("Digite o valor de y: ");
 scanf("%d", &y);
 // Realização das operações matemáticas
 printf("Soma: %d\n", somar());
 printf("Subtração: %d\n", subtrair());
 printf("Multiplicação: %d\n", multiplicar());
 float resultado_divisao = dividir();
 if (resultado_divisao != -1) {
 printf("Divisão: %.2f\n", resultado_divisao);
 } else {
 printf("Erro: Divisão por zero.\n");
 }
 return 0;
}
6) // saudacao.h
#ifndef SAUDACAO_H
#define SAUDACAO_H
extern int hora; // Variável global
void saudacao();
#endif
// saudacao.c
#include <stdio.h>
#include "saudacao.h"
void saudacao() {
 if (hora >= 6 && hora <= 12) {
 printf("Bom dia\n");
 } else if (hora > 12 && hora <= 18) {
 printf("Boa tarde\n");
 } else if ((hora > 18 && hora <= 23) || (hora >= 0 && hora <= 5)) {
 printf("Boa noite\n");
 } else {
 printf("Valor inválido\n");
 }
}
// main.c
#include <stdio.h>
#include "saudacao.h"
int hora; // Defina a variável global hora
int main() {
 printf("Digite a hora: ");
 scanf("%d", &hora);
 saudacao(); // Chama o módulo saudacao()
 return 0;
}
7) // fibonacci.h
#ifndef FIBONACCI_H
#define FIBONACCI_H
// Função para calcular o enésimo termo da sequência de Fibonacci
long long int calcularFibonacci(int n);
#endif // FIBONACCI_H
// fibonacci.c
#include "fibonacci.h"
// Função para calcular o enésimo termo da sequência de Fibonacci
long long int calcularFibonacci(int n) {
 if (n <= 1) {
 return n;
 } else {
 return calcularFibonacci(n - 1) + calcularFibonacci(n - 2);
 }
}
// main.c
#include <stdio.h>
#include "fibonacci.h"
// Variável global para armazenar o valor de N
int N;
int main() {
 // Solicitar ao usuário o valor de N
 printf("Digite o valor de N para calcular o enésimo termo da sequência de Fibonacci: ");
 scanf("%d", &N);
 // Verificar se N é um número não negativo
 if (N < 0) {
 printf("N deve ser um número não negativo.\n");
 return 1; // Sair com código de erro
 }
 // Calcular o enésimo termo da sequência de Fibonacci
 long long int resultado = calcularFibonacci(N);
 // Exibir o resultado
 printf("O enésimo termo da sequência de Fibonacci com N=%d é: %lld\n", N, resultado);
 return 0; // Sair com sucesso
}
8) // medias.h
#ifndef MEDIAS_H
#define MEDIAS_H
// Função para calcular a Média Aritmética
float calcularMediaAritmetica(float nota1, float nota2, float nota3);
// Função para calcular a Média Ponderada com pesos 5, 3, 2
float calcularMediaPonderada(float nota1, float nota2, float nota3);
#endif
// medias.c
#include "medias.h"
float calcularMediaAritmetica(float nota1, float nota2, float nota3) {
 return (nota1 + nota2 + nota3) / 3.0;
}
float calcularMediaPonderada(float nota1, float nota2, float nota3) {
 // Pesos: 5, 3, 2
 return (5 * nota1 + 3 * nota2 + 2 * nota3) / 10.0;
}
// main.c
#include <stdio.h>
#include "medias.h"
int main() {
 float nota1, nota2, nota3, media;
 char tipoMedia;
 // Recebendo as notas do usuário
 printf("Digite a primeira nota: ");
 scanf("%f", &nota1);
 printf("Digite a segunda nota: ");
 scanf("%f", &nota2);
 printf("Digite a terceira nota: ");
 scanf("%f", &nota3);
 // Recebendo o tipo de média ('P' para Ponderada, 'A' para Aritmética)
 printf("Digite o tipo de média desejada (P para Ponderada, A para Aritmética): ");
 scanf(" %c", &tipoMedia);
 // Calculando a média com base no tipo escolhido
 if (tipoMedia == 'A') {
 media = calcularMediaAritmetica(nota1, nota2, nota3);
 } else if (tipoMedia == 'P') {
 media = calcularMediaPonderada(nota1, nota2, nota3);
 } else {
 printf("Tipo de média inválido. Por favor, escolha 'P' ou 'A'.\n");
 return 1; // Código de erro
 }
 // Mostrando o resultado
 printf("A média calculada é: %.2f\n", media);
 return 0; // Programa executado com sucesso
}
#include <stdio.h>
typedef struct {
 int matricula;
 float notas[3];
} Aluno;
Aluno Turma[5];
void LeAluno(int indice) {
 printf("Digite a matrícula do aluno %d: ", indice + 1);
 scanf("%d", &Turma[indice].matricula);
 printf("Digite as notas do aluno %d (3 notas separadas por espaço): ", indice + 1);
 for (int i = 0; i < 3; i++) {
 scanf("%f", &Turma[indice].notas[i]);
 }
}
void ImprimeTurma() {
 printf("=== Dados da Turma ===\n");
 for (int i = 0; i < 5; i++) {
 printf("Aluno %d - Matrícula: %d, Notas: %.2f %.2f %.2f\n",
 i + 1, Turma[i].matricula, Turma[i].notas[0], Turma[i].notas[1], Turma[i].notas[2]);
 }
}
float CalculaMediaAluno(int indice) {
 float soma = 0;
 for (int i = 0; i < 3; i++) {
 soma += Turma[indice].notas[i];
 }
 return soma / 3.0;
}
int main() {
 for (int i = 0; i < 5; i++) {
 LeAluno(i);
 }
 ImprimeTurma();
 for (int i = 0; i < 5; i++) {
 float media = CalculaMediaAluno(i);
 printf("Aluno %d - Media = %.2f\n", i + 1, media);
 }
 return 0;
}
