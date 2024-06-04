1) Aspas Simples (' ') em C: As aspas simples são usadas para representar caracteres individuais.
#include <stdio.h>
int main() {
 char caractere = 'A';
 printf("Caractere: %c\n", caractere);
 return 0;
}
Aspas Duplas (" ") em C: As aspas duplas são usadas para representar strings (sequências de 
caracteres).
#include <stdio.h>
int main() {
 char string[] = "Isso é uma string em C.";
 printf("String: %s\n", string);
 return 0;
}
2)Vetor de Caractere
#include <stdio.h>
int main() {
 // Vetor de caracteres
 char vetorDeCaracteres[] = {'H', 'e', 'l', 'l', 'o', '\0'};
 // Imprimir vetor de caracteres
 printf("Vetor de Caracteres: %s\n", vetorDeCaracteres);
 return 0;
}
String em C
#include <stdio.h>
#include <string.h>
int main() {
 // String em C
 char minhaString[] = "Hello";
 // Imprimir string
 printf("String: %s\n", minhaString);
 return 0;
}
3) #include <stdio.h>
int main() {
 // Declaração da string com 11 caracteres para incluir o caractere nulo '\0'
 char str[11];
 // Solicitação de entrada ao usuário
 printf("Digite uma string de 10 caracteres: ");
 // Leitura da string
 scanf("%10s", str);
 // Impressão da string na tela
 printf("A string digitada é: %s\n", str);
 return 0;
}
4) #include <stdio.h>
#include <string.h>
int main() {
 // Supondo que STR já foi criada no exercício anterior
 char STR[100] = "Sua string aqui";
 char STR2[100];
 // Usando strcpy para copiar STR para STR2
 strcpy(STR2, STR);
 // Imprimindo as strings originais e a cópia
 printf("STR: %s\n", STR);
 printf("STR2: %s\n", STR2);
 return 0;
}
5) #include <stdio.h>
#include <string.h>
int calcularComprimentoComFuncao(char *texto) {
 return strlen(texto);
}
int calcularComprimentoSemFuncao(char *texto) {
 int comprimento = 0;
 while (*texto != '\0') {
 comprimento++;
 texto++;
 }
 return comprimento;
}
int main() {
 char texto[51]; // A string tem 50 posições, então reservamos 51 para o caractere nulo '\0'
 int escolha;
 printf("Digite uma string de no máximo 50 caracteres: ");
 scanf("%50s", texto);
 do {
 printf("\nMenu:\n");
 printf("1. Exibir comprimento usando função strlen\n");
 printf("2. Exibir comprimento sem usar função pronta\n");
 printf("3. Sair\n");
 printf("Escolha uma opção (1/2/3): ");
 scanf("%d", &escolha);
 switch (escolha) {
 case 1:
 printf("Comprimento usando função strlen: %lu\n", strlen(texto));
 break;
 case 2:
 printf("Comprimento sem usar função pronta: %d\n", 
calcularComprimentoSemFuncao(texto));
 break;
 case 3:
 printf("Saindo do programa. Obrigado!\n");
 break;
 default:
 printf("Opção inválida. Tente novamente.\n");
 }
 } while (escolha != 3);
 return 0;
}
6) #include <stdio.h>
#include <stdlib.h>
int main()
{
char nome[50];
printf("Digite um nome\n");
scanf("%s", nome);
printf("As quatro primeiras letras são: %.4s\n", nome);
return 0;
}
7) #include <stdio.h>
#include <string.h>
int verificarCredenciais(char *usuario, char *senha) {
 char usuarioCorreto[] = "admin";
 char senhaCorreta[] = "a1b2C3";
 if (strcmp(usuario, usuarioCorreto) == 0 && strcmp(senha, senhaCorreta) == 0) {
 return 1; // Credenciais corretas
 } else {
 return 0; // Credenciais incorretas
 }
}
int main() {
 char nomeUsuario[20];
 char senhaUsuario[20];
 // Entrada de dados do usuário
 printf("Digite o nome de usuario: ");
 scanf("%s", nomeUsuario);
 printf("Digite a senha: ");
 scanf("%s", senhaUsuario);
 // Verificar credenciais
 if (verificarCredenciais(nomeUsuario, senhaUsuario)) {
 printf("Credenciais corretas. Acesso permitido.\n");
 } else {
 printf("Credenciais incorretas. Acesso negado.\n");
 }
 return 0;
}
8) #include <stdio.h>
int contarUns(char *str) {
 int contador = 0;
 // Percorre a string
 while (*str != '\0') {
 // Verifica se o caractere atual é '1'
 if (*str == '1') {
 contador++;
 }
 // Move para o próximo caractere na string
 str++;
 }
 return contador;
}
int main() {
 char minhaString[] = "0011001";
 int resultado = contarUns(minhaString);
 printf("O número de 1's na string é: %d\n", resultado);
 return 0;
}
9) #include <stdio.h>
#include <string.h>
// Função para verificar se a string é um palíndromo
int isPalindrome(char str[]) {
 int length = strlen(str);
 int i, j;
 for (i = 0, j = length - 1; i < j; i++, j--) {
 if (str[i] != str[j]) {
 return 0; // Não é um palíndromo
 }
 }
 return 1; // É um palíndromo
}
int main() {
 char input[100];
 printf("Digite uma string: ");
 scanf("%s", input);
 if (isPalindrome(input)) {
 printf("%s eh um palindromo.\n", input);
 } else {
 printf("%s nao eh um palindromo.\n", input);
 }
 return 0;
}
10) #include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
 char frase[1000];
 printf("Digite uma frase: ");
 fgets(frase, sizeof(frase), stdin);
 // Remover espaços em branco da frase
 int len = strlen(frase);
 for (int i = 0; i < len; i++) {
 if (frase[i] == ' ') {
 for (int j = i; j < len; j++) {
 frase[j] = frase[j + 1];
 }
 len--;
 i--;
 }
 }
 // Converter a frase para minúsculas para facilitar a comparação
 for (int i = 0; i < len; i++) {
 frase[i] = tolower(frase[i]);
 }
 // Verificar se a frase é um palíndromo
 int palindromo = 1;
 for (int i = 0; i < len / 2; i++) {
 if (frase[i] != frase[len - 1 - i]) {
 palindromo = 0;
 break;
 }
 }
 // Exibir o resultado
 if (palindromo) {
 printf("A frase é um palíndromo.\n");
 } else {
 printf("A frase não é um palíndromo.\n");
 }
 return 0;
}
