// Faça um programa em C que leia um vetor de 12 posições de
//números inteiros e multiplique todos os elementos pelo maior valor
//do vetor. Mostre o vetor após os cálculos.

#include <stdio.h>
#include <stdlib.h>
int main  (){
    int v[12];
    int maior = 0;
    int i = 0;
    int j = 1;
    int k = 1;
    
    
    for ( i = 0 ; i < 12; i++){
        printf("Informe o elemento %d do vetor: ", j++);
        scanf ("%d", &v[i]);}
        
    maior = v[1];
    for ( i = 0; i < 12; i++){
          if ( maior < v[i]){
             maior = v[i];}
    }
             
    for ( i = 0; i < 12; i++){
        v[i] = maior * v[i];
        printf("Vetor %d apos o calculo: %d\n", k++, v[i]);
    }
    
    system ("pause");
    return 0;
}
    
       
