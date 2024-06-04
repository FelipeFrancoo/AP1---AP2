1) #include <stdio.h>
#include <stdlib.h>
int main()
{
 int i=99, j; //Declara duas variáveis do tipo inteiro: i, j, sendo que o valor de i=99.
int *p; //Cria uma variavel ponteiro P
p = &i; //P vai receber o endereço de i
j = *p + 300; //J recebe ponteiro de P + 300
}
2) 1 99 ? ? Declaração e inicialização
2 99 ? ? Declaração (j)
3 99 ? ? Declaração (p)
4 99 ? 99 Endereço de i Atribuição (p = &i)
5 99 ? 99 Endereço de i Declaração (j = *p + 300)
6 99 399 99 Endereço de i Atribuição (j = *p + 300)
3) #include <stdio.h>
#include <stdlib.h>
int main()
{
 int a=5, b=12; //Atribui valor 5 para o A e o valor 12 para o B
int *p; //Definindo ponteiro P
int *q; //Definindo ponteiro Q
p = &a; //P recebe o endereço de A
q = &b; //Q recebe o endereço de B
int c = *p + *q; //Criada a variavel C que recebe ponteiro de P + ponteiro de Q
return 0;
}
4) +---+---+---+-------------+-------------+---+
| a | b | p | *p (valor)| *q (valor)| c |
+---+---+---+-------------+-------------+---+
| 5 |12 | | | | | // Valores iniciais
+---+---+---+-------------+-------------+---+
| 5 |12 | &a| | | | // p recebe o endereço de a
+---+---+---+-------------+-------------+---+
| 5 |12 | &a| 5 | | | // *p aponta para o valor de a
+---+---+---+-------------+-------------+---+
| 5 |12 | &a| 5 | &b | | // q recebe o endereço de b
+---+---+---+-------------+-------------+---+
| 5 |12 | &a| 5 | 12 | | // *q aponta para o valor de b
+---+---+---+-------------+-------------+---+
| 5 |12 | &a| 5 | 12 | 17| // c recebe a soma de *p e *q (5 + 12)
+---+---+---+-------------+-------------+---+
5) #include <stdio.h>
#include <stdlib.h>
int main()
{
int i=7, j=3, c; //Atribui valor a variavel I, atribui valor a variavel J e cria a variavel C
int *p; //Definindo o ponteiro P
int *r; //Definindo o ponteiro R
p = &i; //P recebe o endereço de I
r = &p; //R recebe o endereco de P
c = *r + j; //A variavel C recebe a soma do ponteiro R + o valor da variavel J
return 0;
}
6) +----------+------+------+------+------+------+
| Endereço | &i | &j | &c | &p | &r |
+----------+------+------+------+------+------+
| Valor | 7 | 3 | | | |
+----------+------+------+------+------+------+
| | i=7 | j=3 | c | p | r |
+----------+------+------+------+------+------+
| Passo 1 | i=7 | j=3 | c | p | r |
+----------+------+------+------+------+------+
| Passo 2 | i=7 | j=3 | c | &i | r |
+----------+------+------+------+------+------+
| Passo 3 | i=7 | j=3 | c | &i | &i |
+----------+------+------+------+------+------+
| Passo 4 | i=7 | j=3 | c | &i | &i |
+----------+------+------+------+------+------+
| Passo 5 | i=7 | j=3 | c=10| &i | &i |
+----------+------+------+------+------+------+
7a) True 
b) -2
c) &p
d) 5,2
8) #include <stdio.h>
#include <stdlib.h>
void mudar(int *a)
{
 *a=40;
}
int main()
{
 int i=30;
 printf("\n%d", i);
 mudar(&i);
 printf("\n%d", i);
 return 0;
}
9) #include <stdio.h>
#include <stdlib.h>
#include <string.h>
void mudar(char *a)
{
 strcpy(a,"felipe");
}
int main()
{
 char i[30]={"pedro"};
 printf("%s", i);
 mudar(i);
 printf("\n%s", i);
 return 0;
}
10) #include <stdio.h>
#include <stdlib.h>
void mudar(int *a, int *result)
{
 for (int x=0;x<=5;x++){
 *result=a[x]+*result;
 }
}
int main()
{
 int soma = 0;
 int i[5]={1,2,3,4,5};
 printf("%d", soma);
 mudar(i,&soma);
 printf("\n%d", soma);
 return 0;
}
10) #include <stdio.h>
int somarVetor(int *vetor, int tamanho) {
 int soma = 0;
 for (int i = 0; i < tamanho; i++) {
 soma += vetor[i];
 }
 return soma;
}
int main() {
 int meuVetor[5] = {1, 2, 3, 4, 5};
 int *ponteiroVetor = meuVetor;
 int resultadoSoma = somarVetor(ponteiroVetor, 5);
 printf("A soma dos elementos do vetor é: %d\n", resultadoSoma);
 return 0;
}
11) #include <stdio.h>
void preencherVetor(int *ponteiroVetor, int tamanho) {
 printf("Digite os valores do vetor:\n");
 for (int i = 0; i < tamanho; i++) {
 printf("Elemento %d: ", i + 1);
 scanf("%d", &ponteiroVetor[i]);
 }
}
void imprimirVetor(int *ponteiroVetor, int tamanho) {
 printf("\nValores do vetor:\n");
 for (int i = 0; i < tamanho; i++) {
 printf("%d ", ponteiroVetor[i]);
 }
 printf("\n");
}
int main() {
 int tamanhoVetor;
 printf("Digite o tamanho do vetor: ");
 scanf("%d", &tamanhoVetor);
 int vetor[tamanhoVetor];
 int *ponteiroVetor = vetor;
 preencherVetor(ponteiroVetor, tamanhoVetor);
 imprimirVetor(ponteiroVetor, tamanhoVetor);
 return 0;
}
12) #include <stdio.h>
#include <stdlib.h>
struct Aluno {
 char nome[50];
 int idade;
 float media;
};
int main() {
 struct Aluno *pAluno;
 pAluno = (struct Aluno*)malloc(sizeof(struct Aluno));
 if (pAluno == NULL) {
 fprintf(stderr, "Erro ao alocar memória.\n");
 return 1;
 }
 printf("Digite o nome do aluno: ");
 scanf("%s", pAluno->nome);
 printf("Digite a idade do aluno: ");
 scanf("%d", &(pAluno->idade));
 printf("Digite a média do aluno: ");
 scanf("%f", &(pAluno->media));
 printf("\nDados do aluno:\n");
 printf("Nome: %s\n", pAluno->nome);
 printf("Idade: %d\n", pAluno->idade);
 printf("Média: %.2f\n", pAluno->media);
 free(pAluno);
 return 0;
}
13) #include <stdio.h>
#include <stdlib.h>
struct Aluno {
 char nome[50];
 int idade;
 float nota;
};
int main() {
 struct Aluno *aluno_ptr;
 aluno_ptr = (struct Aluno*)malloc(sizeof(struct Aluno));
 if (aluno_ptr == NULL) {
 printf("Erro na alocação de memória.\n");
 return 1;
 }
 printf("Digite o nome do aluno: ");
 scanf("%s", aluno_ptr->nome);
 printf("Digite a idade do aluno: ");
 scanf("%d", &(aluno_ptr->idade));
 printf("Digite a nota do aluno: ");
 scanf("%f", &(aluno_ptr->nota));
 printf("\nDados do aluno:\n");
 printf("Nome: %s\n", aluno_ptr->nome);
 printf("Idade: %d\n", aluno_ptr->idade);
 printf("Nota: %.2f\n", aluno_ptr->nota);
 free(aluno_ptr);
 return 0;
}
14) #include <iostream>
#include <string>
struct Endereco {
 std::string rua;
 int numero;
 std::string cidade;
};
struct Pessoa {
 std::string nome;
 int idade;
 Endereco endereco;
};
int main() {
 Pessoa pessoa;
 pessoa.nome = "João";
 pessoa.idade = 25;
 pessoa.endereco.rua = "Rua Exemplo";
 pessoa.endereco.numero = 123;
 pessoa.endereco.cidade = "Cidade Exemplo";
 Pessoa *ponteiroPessoa = &pessoa;
 std::cout << "Nome: " << ponteiroPessoa->nome << std::endl;
 std::cout << "Idade: " << ponteiroPessoa->idade << std::endl;
 std::cout << "Endereço: " << ponteiroPessoa->endereco.rua << ", "
 << ponteiroPessoa->endereco.numero << ", "
 << ponteiroPessoa->endereco.cidade << std::endl;
 return 0;
}
15) #include <iostream>
#include <cmath>
struct Ponto {
 double x;
 double y;
};
double calcularDistanciaOrigem(const Ponto* ponto) {
 double distancia = sqrt(pow(ponto->x, 2) + pow(ponto->y, 2));
 return distancia;
}
int main() {
 Ponto pontoExemplo = {3.0, 4.0};
 double distancia = calcularDistanciaOrigem(&pontoExemplo);
 std::cout << "A distância do ponto até a origem é: " << distancia << std::endl;
 return 0;
}
