// Escreva um programa C que utilize um vetor para armazenar a
//nota de 10 alunos de uma disciplina, calcule e imprima a média, e
//determine o número de alunos que tiveram nota superior à média.


#include <stdio.h>
#include <stdlib.h>
int main  (){
    int v[10];
    int media = 0;
    int nota = 0;
    int a = 1;
    int i = 0;
    int contador = 0;
    for ( i = 0; i < 10; i++){
    printf ("Informe a nota do aluno %d: ", a++);
        scanf("%d", &v[i]);
        media = media + v[i];
        }
        media = media / i;
        
        for ( i = 0; i < 10; i++){
            if ( v[i] > media){
                 contador++;}
        }
        printf (" %d\n", media);
        printf("O numero de alunos com nota superior a media: %d", contador++);
        system ("pause");
        return 0;
        }
