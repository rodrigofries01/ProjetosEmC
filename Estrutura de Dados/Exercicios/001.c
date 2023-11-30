#include <stdio.h>
#include <stdlib.h>

typedef struct Curso
{
    int id;
    char *nomeCurso;
    char nomeCordenador[100];
    int duracao;
} Curso;

typedef struct Aluno
{
    int registroAcademico;
    char aluno[100];
    int dia;
    int mes;
    int ano;
    struct Curso *curso;
} Aluno;

typedef struct No
{
    struct Aluno *aluno;
    struct No *prox;
} No;

typedef No *pt_No;
typedef Aluno *pt_Aluno;

int main(void)
{
    pt_No lista;
    pt_Aluno aluno1;
    lista = (pt_No)malloc(sizeof(No));
    aluno1 = (pt_Aluno)malloc(sizeof(Aluno));
    Curso *medicina = (Curso *)malloc(sizeof(Curso));

    medicina->nomeCurso = "Medicina";
    aluno1->curso = medicina;
    lista->aluno = aluno1;

    printf("%s", aluno1->curso->nomeCurso);
}

// A linguagem de programação C, traz estruturas prontas para armazenamento múltiplo em uma
// única variável, os vetores, as matrizes e os registros. Estas estruturas são classificadas em
// homogêneas, que armazenam um único tipo de informação e; heterogêneas, que podem
// armazenar informações de tipos diferentes. O registro é uma estrutura heterogênea,
// representada por uma coleção de variáveis que permitem o armazenamento de informações de
// tipos diferentes, possibilitando que o programador crie tipos de dados específicos e
// personalizados.
// (Fonte: OLIVEIRA, Pietro Martins de; Pereira, Rogério de Leon. Estrutura de Dados l. Maringá-Pr.:
// Unicesumar, 2019.)

// A partir disso, considere o problema a seguir:
// O departamento de uma determinada universidade deseja criar uma lista de alunos. No entanto,
// essa lista deve vir separada por cursos. Sabe-se que as informações armazenadas dos alunos
// devem conter o registro acadêmico (RA), o nome, a data de matrícula e a identificação do curso
// Já o curso deve conter um identificar numérico, o nome, a duração e o nome do(a)
// coordenador(a) do curó.Para resolver esse problema aponte:
// 1) A quantidade de estruturas tipo "registro" que devem ser criadas.
// 2) O campo (atributo) que relaciona o aluno ao curso.
// 3) Implemente apenas a(s) estrutura(s) necessárias para criar a lista solicitada.