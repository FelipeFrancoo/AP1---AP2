1) #include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
int main() {
 setlocale(LC_ALL, "Portuguese");
 int escolha;
 while (1) {
 printf("Escolha um exercício:\n");
 printf("1. Exercício 1\n");
 printf("2. Exercício 2\n");
 printf("3. Exercício 3\n");
 printf("4. Sair\n");
 printf("Digite o número da opção desejada: ");
 scanf("%d", &escolha);
 switch (escolha) {
 case 1:
 printf("Você escolheu o Exercício 1.\n");
 break;
 case 2:
 printf("Você escolheu o Exercício 2.\n");
 break;
 case 3:
 printf("Você escolheu o Exercício 3.\n");
 break;
 case 4:
 printf("Saindo do programa. Até mais!\n");
 return 0;
 default:
 printf("Opção inválida. Por favor, escolha uma opção válida.\n");
 }
 }
 return 0;
}
2) #include <stdio.h>
#include <stdlib.h>
int main()
{
 int idade = 0;
 printf("Voce tem quantos anos?\n");
 scanf("%d",&idade);
 printf("Voce tem %d anos\n", idade);
 return 0;
}
3)
int main()
{
 int num;
 printf("Digite um numero decimal\n");
 scanf("%d", &num);
 printf("Em Hexadecimal: %X\n",num);
 printf("Em Octal: %o\n",num);
 return 0;
}
4) ++a (pré-incremento): Incrementa o valor da variável a antes de usá-lo em uma expressão. Isso 
significa que o valor de a é aumentado imediatamente, e o novo valor é usado na expressão atual.
a++ (pós-incremento): Incrementa o valor da variável a após usá-lo na expressão atual. Isso significa 
que o valor de a` é usado na expressão atual e, em seguida, é incrementado.
5) #include <stdio.h>
int main() {
 int numero;
 printf("Digite um número inteiro: ");
 scanf("%d", &numero);
 // Usando o operador condicional ternário para verificar se o número é par ou ímpar
 (numero % 2 == 0) ? printf("O número é par.\n") : printf("O número é ímpar.\n");
 return 0;
}
6) #include <stdio.h>
int main() {
 int valor1, valor2;
 printf("Digite o primeiro valor: ");
 scanf("%d", &valor1);
 printf("Digite o segundo valor: ");
 scanf("%d", &valor2);
 if (valor1 < valor2) {
 for (int i = valor1; i <= valor2; i++) {
 printf("%d ", i);
 }
 printf("\n"); 
 } else if (valor1 > valor2) {
 for (int i = valor1; i >= valor2; i--) {
 printf("%d ", i);
 }
 printf("\n"); 
 } else {
 printf("Valores iguais\n");
 }
 return 0;
}
7) #include <stdio.h>
int main() {
 int N;
 int i = 1;
 int sinal = 1;
 // Solicita ao usuário um número inteiro e positivo
 printf("Digite um número inteiro positivo: ");
 scanf("%d", &N);
 while (i <= N) {
 if (sinal == 1) {
 printf("%d ", i);
 } else {
 printf("%d ", -i);
 }
 sinal = -sinal;
 i++;
 // Para manter o código legível, pule para uma nova linha após imprimir N termos por linha
 if (i % 10 == 0) {
 printf("\n");
 }
 }
 printf("\n");
 return 0;
}
8) #include <stdio.h>
int main() {
 int N;
 int i = 1;
 int sinal = 1;
 // Solicita ao usuário um número inteiro e positivo
 printf("Digite um número inteiro positivo: ");
 scanf("%d", &N);
 while (i <= N) {
 if (sinal == 1) {
 printf("%d ", i);
 } else {
 printf("%d ", -i);
 }
 sinal = -sinal;
 i++;
 // Para manter o código legível, pule para uma nova linha após imprimir N termos por linha
 if (i % 10 == 0) {
 printf("\n");
 }
 }
 printf("\n");
 return 0;
}
9) #include <stdio.h>
int main() {
 int n;
 long long fatorial = 1;
 // Solicita ao usuário que insira um número inteiro e positivo
 printf("Digite um número inteiro e positivo: ");
 scanf("%d", &n);
 // Verifica se o número é positivo
 if (n < 0) {
 printf("Por favor, insira um número inteiro e positivo.\n");
 } else {
 // Calcula o fatorial usando um laço while
 while (n > 0) {
 fatorial *= n;
 n--;
 }
 // Exibe o resultado
 printf("O fatorial é: %lld\n", fatorial);
 }
 return 0;
}
10) #include <stdio.h>
int main() {
 int N;
 printf("Digite um número inteiro positivo: ");
 scanf("%d", &N);
 if (N <= 0) {
 printf("N deve ser um número inteiro positivo.\n");
 } else {
 int a = 0, b = 1, fib;
 if (N == 1) {
 printf("O Fibonacci de %d é 0\n", N);
 } else {
 for (int i = 2; i < N; i++) {
 fib = a + b;
 a = b;
 b = fib;
 }
 printf("O Fibonacci de %d é %d\n", N, b);
 }
 }
 return 0;
}
11) #include <stdio.h>
int main() {
 float nota[6]; // Vetor para armazenar as notas
 float media = 0.0;
 int abaixo_de_seis = 0;
 // Inicialize o vetor de notas com 0
 for (int i = 0; i < 6; i++) {
 nota[i] = 0;
 }
 // Leia as 6 notas
 for (int i = 0; i < 6; i++) {
 printf("Digite a nota %d (entre 0 e 10): ", i + 1);
 scanf("%f", &nota[i]);
 }
 // Imprima as notas lidas
 printf("Notas lidas: ");
 for (int i = 0; i < 6; i++) {
 printf("%.2f ", nota[i]);
 }
 // Calcule a média das notas acima de 6
 for (int i = 0; i < 6; i++) {
 if (nota[i] > 6) {
 media += nota[i];
 } else {
 abaixo_de_seis++;
 }
 }
 if (abaixo_de_seis < 6) {
 media = media / (6 - abaixo_de_seis);
 printf("\nMédia das notas acima de 6: %.2f\n", media);
 } else {
 printf("\nNão há notas acima de 6 para calcular a média.\n");
 }
 printf("Quantidade de notas abaixo de 6: %d\n", abaixo_de_seis);
 return 0;
}
12) #include <stdio.h>
int main() {
 int N;
 while (1) {
 scanf("%d", &N);
 if (N == 0) {
 break;
 }
 // Construir a matriz
 int matriz[N][N];
 for (int i = 0; i < N; i++) {
 for (int j = 0; j < N; j++) {
 matriz[i][j] = 1 << (i + j);
 }
 }
 // Imprimir a matriz
 for (int i = 0; i < N; i++) {
 for (int j = 0; j < N; j++) {
 printf("%3d", matriz[i][j]);
 if (j < N - 1) {
 printf(" ");
 }
 }
 printf("\n");
 }
 printf("\n"); // Deixe uma linha em branco após a matriz
 }
 return 0;
}
