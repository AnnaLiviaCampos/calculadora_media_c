#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct{
    char nome[100];
    int matricula;
    float notas[3];
}Aluno;

Aluno cadastrarAluno(){
    Aluno alunos;
    int i;
    printf("Digite o nome do aluno(a): \n");
    fgets(alunos.nome, 100, stdin);
    printf("Digite a matricula: \n");
    scanf("%d", &alunos.matricula);
    for(i=0; i<3;i++){
        printf("Digite a %d nota: \n", i+1);
        scanf("%f", &alunos.notas[i]);
    }
    return alunos;
}

float media(Aluno alunos){
    int i;
    float resposta = 0;
    for(i=0; i<3; i++){
        resposta += alunos.notas[i];
    }
    return resposta/3;
}

int main(){
    Aluno alunos = cadastrarAluno();
    int i;
    float res;
    printf("O nome do aluno: %s\n", alunos.nome);
    printf("Matricula: %d\n", alunos.matricula);
    for(i=0; i<3; i++){
        printf("Nota %d: %.2f\n", i+1, alunos.notas[i]);
    }
    res = media(alunos);
    printf("Media do aluno: %.2f\n", res);
    if(res >= 6)
        printf("Aluno aprovado!");
    else
        printf("Aluno reprovado!");
    return 0;
}

