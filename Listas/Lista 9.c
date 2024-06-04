1) #include <stdio.h>
int main() {
 FILE *arquivo = fopen("dados.txt", "w");
 if (arquivo == NULL) {
 printf("Erro ao abrir o arquivo.");
 return 1;
 }
 for (int i = 0; i <= 100; i += 10) {
 fprintf(arquivo, "%d\n", i);
 }
 fclose(arquivo);
 return 0;
}
2) #include <stdio.h>
int main() {
 if (rename("dados.txt", "MATRICULADOS.TXT") != 0) {
 printf("Erro ao renomear o arquivo.");
 return 1;
 }
 return 0;
}
3) #include <stdio.h>
#include <stdlib.h>
struct Aluno {
 int matricula;
 char nome[50];
 char curso[50];
 float nota1;
 float nota2;
};
int main() {
 FILE *arquivo;
 struct Aluno aluno;
 char continuar;
 arquivo = fopen("ALUNOS.DAT", "wb");
 if (arquivo == NULL) {
 printf("Erro ao abrir o arquivo.");
 exit(1);
 }
 do {
 printf("Digite a matricula: ");
 scanf("%d", &aluno.matricula);
 printf("Digite o nome: ");
 scanf("%s", aluno.nome);
 printf("Digite o curso: ");
 scanf("%s", aluno.curso);
 printf("Digite a nota 1: ");
 scanf("%f", &aluno.nota1);
 printf("Digite a nota 2: ");
 scanf("%f", &aluno.nota2);
 fwrite(&aluno, sizeof(struct Aluno), 1, arquivo);
 printf("Deseja adicionar outro aluno? (S/N): ");
 scanf(" %c", &continuar);
 } while (continuar == 'S' || continuar == 's');
 fclose(arquivo);
 printf("Dados dos alunos gravados com sucesso no arquivo ALUNOS.DAT.\n");
 return 0;
}
4) #include <stdio.h>
#include <stdlib.h>
struct Aluno {
 int matricula;
 char nome[50];
 char curso[50];
 float nota1;
 float nota2;
};
int main() {
 FILE *arquivo;
 struct Aluno aluno;
 char continuar;
 int encontrouMatricula = 0;
 arquivo = fopen("ALUNOS.DAT", "ab+");
 if (arquivo == NULL) {
 printf("Erro ao abrir o arquivo.");
 exit(1);
 }
 do {
 printf("Digite a matricula: ");
 scanf("%d", &aluno.matricula);
 fseek(arquivo, 0, SEEK_SET);
 while (fread(&aluno, sizeof(struct Aluno), 1, arquivo) == 1) {
 if (aluno.matricula == aluno.matricula) {
 printf("Matricula ja existente. Digite uma matricula diferente.\n");
 encontrouMatricula = 1;
 break;
 }
 }
 if (encontrouMatricula == 0) {
 printf("Digite o nome: ");
 scanf("%s", aluno.nome);
 printf("Digite o curso: ");
 scanf("%s", aluno.curso);
 printf("Digite a nota 1: ");
 scanf("%f", &aluno.nota1);
 printf("Digite a nota 2: ");
 scanf("%f", &aluno.nota2);
 fseek(arquivo, 0, SEEK_END);
 fwrite(&aluno, sizeof(struct Aluno), 1, arquivo);
 printf("Aluno adicionado com sucesso.\n");
 }
 printf("Deseja adicionar outro aluno? (S/N): ");
 scanf(" %c", &continuar);
 encontrouMatricula = 0;
 } while (continuar == 'S' || continuar == 's');
 fclose(arquivo);
 return 0;
}
5) #include <stdio.h>
#include <stdlib.h>
struct Aluno {
 int matricula;
 char nome[50];
 char curso[50];
 float nota1;
 float nota2;
};
int main() {
 FILE *arquivo;
 struct Aluno aluno;
 int matriculaAlvo;
 float novaNota1, novaNota2;
 int encontrouAluno = 0;
 arquivo = fopen("ALUNOS.DAT", "rb+");
 if (arquivo == NULL) {
 printf("Erro ao abrir o arquivo.");
 exit(1);
 }
 printf("Digite a matricula do aluno que deseja alterar as notas: ");
 scanf("%d", &matriculaAlvo);
 while (fread(&aluno, sizeof(struct Aluno), 1, arquivo) == 1) {
 if (aluno.matricula == matriculaAlvo) {
 encontrouAluno = 1;
 printf("Aluno encontrado.\n");
 printf("Digite a nova nota 1: ");
 scanf("%f", &novaNota1);
 printf("Digite a nova nota 2: ");
 scanf("%f", &novaNota2);
 aluno.nota1 = novaNota1;
 aluno.nota2 = novaNota2;
 fseek(arquivo, -sizeof(struct Aluno), SEEK_CUR)
 fwrite(&aluno, sizeof(struct Aluno), 1, arquivo);
 printf("Notas do aluno atualizadas com sucesso.\n");
 break;
 }
 }
 if (!encontrouAluno) {
 printf("Aluno nao encontrado.\n");
 }
 fclose(arquivo);
 return 0;
}
6) #include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Aluno {
 int matricula;
 char nome[50];
 char curso[50];
 float nota1;
 float nota2;
};
int main() {
 FILE *arquivo;
 struct Aluno aluno;
 int matriculaAlvo;
 char novoCurso[50];
 int encontrouAluno = 0;
 arquivo = fopen("ALUNOS.DAT", "rb+");
 if (arquivo == NULL) {
 printf("Erro ao abrir o arquivo.");
 exit(1);
 }
 printf("Digite a matricula do aluno que deseja alterar o curso: ");
 scanf("%d", &matriculaAlvo);
 while (fread(&aluno, sizeof(struct Aluno), 1, arquivo) == 1) {
 if (aluno.matricula == matriculaAlvo) {
 encontrouAluno = 1;
 printf("Aluno encontrado.\n");
 printf("Digite o novo curso: ");
 scanf("%s", novoCurso);
 strcpy(aluno.curso, novoCurso);
 fseek(arquivo, -sizeof(struct Aluno), SEEK_CUR);
 fwrite(&aluno, sizeof(struct Aluno), 1, arquivo);
 printf("Curso do aluno atualizado com sucesso.\n");
 break;
 }
 }
 if (!encontrouAluno) {
 printf("Aluno nao encontrado.\n");
 }
 fclose(arquivo);
 return 0;
}
7) #include <stdio.h>
#include <stdlib.h>
struct Aluno {
 int matricula;
 char nome[50];
 char curso[50];
 float nota1;
 float nota2;
};
int main() {
 FILE *arquivo;
 FILE *tempArquivo;
 struct Aluno aluno;
 float media;
 int totalAlunosExcluidos = 0;
 arquivo = fopen("ALUNOS.DAT", "rb");
 tempArquivo = fopen("temp_ALUNOS.DAT", "wb");
 if (arquivo == NULL || tempArquivo == NULL) {
 printf("Erro ao abrir o arquivo.");
 exit(1);
 }
 while (fread(&aluno, sizeof(struct Aluno), 1, arquivo) == 1) {
 media = (aluno.nota1 + aluno.nota2) / 2.0;
 if (media >= 6.0) {
 fwrite(&aluno, sizeof(struct Aluno), 1, tempArquivo);
 } else {
 totalAlunosExcluidos++;
 }
 }
 fclose(arquivo);
 fclose(tempArquivo);
 remove("ALUNOS.DAT");
 rename("temp_ALUNOS.DAT", "ALUNOS.DAT");
 printf("Total de alunos reprovados excluidos: %d\n", totalAlunosExcluidos);
 return 0;
}
8) #include <stdio.h>
#include <stdlib.h>
struct Aluno {
 int matricula;
 char nome[50];
 float nota1;
 float nota2;
};
int main() {
 FILE *arquivo;
 struct Aluno aluno;
 float media;
 arquivo = fopen("ALUNOS.DAT", "rb");
 if (arquivo == NULL) {
 printf("Erro ao abrir o arquivo.");
 exit(1);
 }
 printf("Alunos cadastrados:\n");
 printf("------------------------------\n");
 printf("Numero\tNome\t\tMedia\n");
 printf("------------------------------\n");
 while (fread(&aluno, sizeof(struct Aluno), 1, arquivo) == 1) {
 media = (aluno.nota1 + aluno.nota2) / 2.0;
 printf("%d\t%s\t\t%.2f\n", aluno.matricula, aluno.nome, media);
 }
 printf("------------------------------\n");
 fclose(arquivo);
 return 0;
}
9) #include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Aluno {
 int matricula;
 char nome[50];
 char curso[50];
 float nota1;
 float nota2;
};
int main() {
 FILE *arquivo;
 struct Aluno aluno;
 arquivo = fopen("ALUNOS.DAT", "rb");
 if (arquivo == NULL) {
 printf("Erro ao abrir o arquivo.");
 exit(1);
 }
 printf("Alunos com nomes iniciados pela letra 'M':\n");
 printf("-------------------------------------------\n");
 printf("Numero\tNome\n");
 printf("-------------------------------------------\n");
 while (fread(&aluno, sizeof(struct Aluno), 1, arquivo) == 1) {
 if (aluno.nome[0] == 'M') {
 printf("%d\t%s\n", aluno.matricula, aluno.nome);
 }
 }
 printf("-------------------------------------------\n");
 fclose(arquivo);
 return 0;
}
