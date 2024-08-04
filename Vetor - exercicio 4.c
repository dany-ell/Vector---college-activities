// Escreva um programa C que utilize um vetor para armazenar um
// conjunto de N elementos inteiros, número este fornecido pelo usuário.
// Verifique e imprima quantos desses elementos são positivos e quantos são
// negativos

#include <stdio.h>
#include <stdlib.h>
int main  (){
    int N;
    int i;
    int positivo = 0;
    int negativo = 0;
    
    printf ("Informe o numero de elementos:\n");
    scanf ("%d", &N);
    
    int v[N];
    
    for ( i = 0; i < N; i++){
        printf ("Insira os valores:\n");
        scanf ("%d", &v[i]);
        if ( v[i] > 0){
        positivo++;}
        else if ( v[i] < 0){
        negativo++;}
        }
    
    printf ("Sao %d elementos positivos\n", positivo);
    printf ("Sao %d elementos negativos\n", negativo);
    system ("pause");
    return 0;
}
    
    
             
    
    
    
