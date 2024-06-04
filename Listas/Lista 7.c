1) #include <stdio.h>
#include <stdlib.h>
int troca (int *y, int *x)
{
 int aux;
 aux = *x;
 *x = *y;
 *y = aux;
}
int main()
{
 int a, b;
 printf("Digite o primeiro valor\n");
 scanf("%d",&a);
 printf("Digite o segundo valor\n");
 scanf("%d",&b);
 printf("Os valores digitados: \t%d \t%d\n", a,b, &a, &b);
 troca(&a, &b);
 printf("Os valores trocados: \t%d \t%d",a,b);
 return 0;
}
#include <stdio.h>
#include <stdlib.h>
int soma (int *x, int *y)
{
 *x = *x+1;
 *y = *y-1;
}
int main()
{
 int a, b;
 printf("Digite o primeiro valor\n");
 scanf("%d",&a);
 printf("Digite o segundo valor\n");
 scanf("%d",&b);
 printf("Os valores digitados: \t%d \t%d\n", a,b, &a, &b);
 soma(&a, &b);
 printf("Resultado: \t%d \t%d",a,b);
 return 0;
}
#include <stdio.h>
#include <stdlib.h>
float calcula (float r, float *p, float*a)
{
 *p = 2*3.14*r;
 *a = 3.14*r*r;
}
void main()
{
 float raio = 2, perim, area;
 printf(" Digite o valor do raio\n");
 scanf("%f",&raio);
 printf("\n O raio é:%.2f", raio);
 calcula (raio, &perim, &area);
 printf("\n Perimetro = %.2f", perim);
 printf("\n Area = %.2f", area);
 return 0;
}
#include <stdio.h>
#include <stdlib.h>
float calcula (float l, float *p, float*a)
{
 *p = 4*l;
 *a = l*l;
}
void main()
{
 float lado, perim, area;
 printf(" Digite o valor do lado\n");
 scanf("%f",&lado);
 printf("\n O lado é:%.2f", lado);
 calcula (lado, &perim, &area);
 printf("\n Perimetro = %.2f", perim);
 printf("\n Area = %.2f", area);
 return 0;
}
2) #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "palavra.h"
void main()
{
 char frase[30];
 char letra;
 printf("Digite uma frase\n");
 gets(frase);
 fflush(stdin);
 printf("Qual caractere quer criptografar?\n");
 scanf("%c", &letra);
 fflush(stdin);
 cript(frase, letra, 30);
 return 0;
}
#ifndef PALAVRA_H_INCLUDED
#define PALAVRA_H_INCLUDED
void cript(char *vetor, char letra, int tam){
 for (int i = 0; i < tam; i++){
 if((vetor[i]=='a')||(vetor[i]=='e')||(vetor[i]=='i')||(vetor[i]=='o')||(vetor[i]=='u')){
 vetor[i]=letra;
 }
 }
 printf("%s", vetor);
}
#endif // PALAVRA_H_INCLUDED
3) #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "palavra.h"
void main()
{
 char frase[30];
 printf("Digite uma frase\n");
 gets(frase);
 maiusculo(frase);
 return 0;
}
#ifndef PALAVRA_H_INCLUDED
#define PALAVRA_H_INCLUDED
 void maiusculo(char *vetor){
 for (int i=0; i<30; i++){
 vetor[i]=toupper(vetor[i]);
 }
 printf("\n%s", vetor);
 }
#endif // PALAVRA_H_INCLUDED
4) #include <stdio.h>
void ordenar_vetor(float vetor[3]) {
 float temp;
 for (int i = 0; i < 2; i++) {
 for (int j = 0; j < 2 - i; j++) {
 if (vetor[j] > vetor[j + 1]) {
 temp = vetor[j];
 vetor[j] = vetor[j + 1];
 vetor[j + 1] = temp;
 }
 }
 }
}
int main() {
 float vetor_A[3] = {3.2, 1.5, 2.8};
 ordenar_vetor(vetor_A);
 printf("Vetor original: %.2f, %.2f, %.2f\n", vetor_A[0], vetor_A[1], vetor_A[2]);
 printf("Vetor ordenado: %.2f, %.2f, %.2f\n", vetor_A[0], vetor_A[1], vetor_A[2]);
 return 0;
}
5) #include <stdio.h>
void Elementos(int *v) {
 for (int i = 0; i < 8; i++) {
 if (v[i] >= 15 && v[i] <= 20) {
 v[i] = 0;
 }
 }
}
int main() {
 int vetor[8] = {10, 16, 18, 22, 14, 20, 25, 30};
 printf("Vetor original: ");
 for (int i = 0; i < 8; i++) {
 printf("%d ", vetor[i]);
 }
 printf("\n");
 Elementos(vetor);
 printf("Novo vetor: ");
 for (int i = 0; i < 8; i++) {
 printf("%d ", vetor[i]);
 }
 printf("\n");
 return 0;
}
6) #include <stdio.h>
void substituirParesPorMil(int matriz[2][3]) {
 for (int i = 0; i < 2; i++) {
 for (int j = 0; j < 3; j++) {
 if (matriz[i][j] % 2 == 0) {
 matriz[i][j] = 1000;
 }
 }
 }
}
int main() {
 int minhaMatriz[2][3] = {{1, 2, 3}, {4, 5, 6}};
 printf("Matriz original:\n");
 for (int i = 0; i < 2; i++) {
 for (int j = 0; j < 3; j++) {
 printf("%d ", minhaMatriz[i][j]);
 }
 printf("\n");
 }
 substituirParesPorMil(minhaMatriz);
 printf("\nMatriz com pares substituídos por 1000:\n");
 for (int i = 0; i < 2; i++) {
 for (int j = 0; j < 3; j++) {
 printf("%d ", minhaMatriz[i][j]);
 }
 printf("\n");
 }
 return 0;
}
