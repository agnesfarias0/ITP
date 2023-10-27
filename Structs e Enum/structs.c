#include <stdio.h>
#include <math.h>
#include <ctype.h>


struct Aluno{
  int matricula;
  char nome[50];
  int codigo;
  float n1,n2;
};

void escreverAluno(struct Aluno a, float media){
  printf("%s  , ", a.nome);
  printf("média final=%.1f", media);
}

int main() {
  int qnt;

  scanf("%d", &qnt);

  struct Aluno alunos[qnt];
  float media[qnt];

  for(int i=0; i<qnt; i++){
    scanf("%d,%s , %d,%f , %f", 
      &alunos[i].matricula, 
      alunos[i].nome, 
      &alunos[i].codigo, 
      &alunos[i].n1, &alunos[i].n2);
    media[i] = floor(((alunos[i].n1+((alunos[i].n2)*2))/3)*10)/10;

    if (islower(alunos[i].nome[0])) {
      alunos[i].nome[0] = toupper(alunos[i].nome[0]);   
    }

    escreverAluno(alunos[i], media[i]);
  }

}