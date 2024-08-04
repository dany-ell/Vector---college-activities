// Faça um programa em C que carregue um vetor com 10 posições,
// calcule e mostre:
// a. O maior elemento do vetor e em que posição esse elemento
// se encontra;
// b. O menor elemento do vetor e em que posição esse elemento
// se encontra.


#include <stdio.h>
#include <stdlib.h>
int main  (){
    int v[10];
    int maior = 0;
    int menor = 0;
    int i = 0;
    int j = 1;
    
    for ( i = 0 ; i < 10; i++){
        printf("Informe o elemento %d do vetor: ", j++);
        scanf ("%d", &v[i]);}
        
        maior = v[1];
        for ( i = 0; i < 10; i++){
        if ( maior < v[i]){
             maior = v[i] ;}
        }
        printf ("Maior elemento: %d\n Posicao: %d", maior, i);
        
        menor = v[i];
        for ( i = 0; i < 10; i++){
            if ( menor < v[i]){
                 menor = v[i];}
        }
        printf ("Menor elemento: %d\n Posicao: %d", menor, i);
        
        system ("pause");
        return 0;
}
