#include <stdlib.h>
#include <string.h>
#include <stdio.h>

typedef struct aluno{
  char nome[30];
  int RA;
  float media;
}Aluno;

int main(){
  Aluno *aluno;
  aluno = (Aluno*) malloc(sizeof(Aluno));
  
  strcpy(aluno->nome, "Joao");
  aluno->RA = 123456;
  aluno->media = 10.0;

  printf("%s\t%d\t%.1f",aluno->nome, aluno->RA, 
  aluno->media);

  free(aluno);

return (0);
}
