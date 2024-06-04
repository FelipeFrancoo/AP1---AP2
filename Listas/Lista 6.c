1) #include <stdio.h>
int somaNaturais(int n) {
 if (n == 0) {
 return 0;
 } else {
 return n + somaNaturais(n - 1);
 }
}
int main() {
 int n;
 
 printf("Digite um número natural n: ");
 scanf("%d", &n);
 
 if (n < 0) {
 printf("Por favor, digite um número natural.\n");
 } else {
 int resultado = somaNaturais(n);
 printf("A soma dos primeiros %d números naturais é: %d\n", n, resultado);
 }
 return 0;
}
2) Recursiva
#include <stdio.h>
int mult_recursive(int a, int b) {
 // Caso base: se b é 0, a multiplicação é 0
 if (b == 0) {
 return 0;
 } else {
 // Chamada recursiva: a + mult_recursive(a, b-1)
 return a + mult_recursive(a, b - 1);
 }
}
int main() {
 int result = mult_recursive(5, 3);
 printf("Multiplicação: %d\n", result);
 return 0;
}
Iterativa
#include <stdio.h>
int mult_iterative(int a, int b) {
 int result = 0;
 
 // Utilizando um loop para somar 'a' 'b' vezes
 for (int i = 0; i < b; i++) {
 result += a;
 }
 return result;
}
int main() {
 int result = mult_iterative(5, 3);
 printf("Multiplicação: %d\n", result);
 return 0;
}
3) Recursiva
def pot_recursiva(x, n):
 if n == 0:
 return 1
 elif n > 0:
 return x * pot_recursiva(x, n - 1)
 else:
 return 1 / (x * pot_recursiva(x, -n - 1))
resultado_recursivo = pot_recursiva(2, 3)
print(resultado_recursivo)
Iterativa
def pot_iterativa(x, n):
 resultado = 1
 if n < 0:
 x = 1 / x
 n = -n
 for _ in range(n):
 resultado *= x
 return resultado
resultado_iterativo = pot_iterativa(2, 3)
print(resultado_iterativo)
4) #include <stdio.h>
unsigned long long fatorial(int n) {
 if (n == 0 || n == 1) {
 return 1;
 } else {
 return n * fatorial(n - 1);
 }
}
unsigned long long fatorialQuadruplo(int N) {
 unsigned long long numerador = fatorial(2 * N);
 unsigned long long denominador = fatorial(N);
 return numerador / denominador;
}
int main() {
 int N = 5;
 unsigned long long resultadoFatorialQuadruplo = fatorialQuadruplo(N);
 printf("O fatorial quádruplo de %d é: %llu\n", N, resultadoFatorialQuadruplo);
 return 0;
}
6) #include <stdio.h>
int fibonacci(int n) {
 if (n <= 1) {
 return n;
 } else {
 return fibonacci(n - 1) + fibonacci(n - 2);
 }
}
int main() {
 int n;
 printf("Digite o valor de n para calcular o n-ésimo termo da sequência de Fibonacci: ");
 scanf("%d", &n);
 if (n < 0) {
 printf("O valor de n deve ser não-negativo.\n");
 } else {
 printf("O %d-ésimo termo da sequência de Fibonacci é: %d\n", n, fibonacci(n));
 }
 return 0;
}
7) #include <stdio.h>
int calcularExpressao(int N) {
 // Caso base
 if (N == 1) {
 return 0;
 } else {
 // Chamada recursiva
 return (N - 1) + calcularExpressao(N - 1);
 }
}
int main() {
 int N = 5; int resultado = calcularExpressao(N);
 printf("O resultado da expressao para N = %d é: %d\n", N, resultado);
 return 0;
}
8) #include <stdio.h>
int tribonacci(int n) {
 if (n == 0 || n == 1)
 return 0;
 else if (n == 2)
 return 1;
 else
 return tribonacci(n - 1) + tribonacci(n - 2) + tribonacci(n - 3);
}
int main() {
 int n;
 printf("Digite o valor de N para obter o N-ésimo número da sequência de Tribonacci: ");
 scanf("%d", &n);
 if (n < 0) {
 printf("Por favor, insira um número inteiro não negativo.\n");
 } else {
 int resultado = tribonacci(n);
 printf("O %d-ésimo número da sequência de Tribonacci é: %d\n", n, resultado);
 }
 return 0;
}
9) #include <stdio.h>
int pell_number(int n) {
 if (n == 0) {
 return 0;
 } else if (n == 1) {
 return 1;
 } else {
 return 2 * pell_number(n - 1) + pell_number(n - 2);
 }
}
int main() {
 int n;
 printf("Digite o valor de N para calcular o N-ésimo número de Pell: ");
 scanf("%d", &n);
 int result = pell_number(n);
 printf("O %d-ésimo número de Pell é: %d\n", n, result);
 return 0;
}
