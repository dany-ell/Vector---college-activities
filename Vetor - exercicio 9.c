//8. Faça um programa em C que carregue um vetor com N elementos
//inteiros, onde N é um número fornecido pelo usuário, calcule e mostre:
//a. Os números múltiplos de 2;
// b. Os números múltiplos de 3;
// c. Os números múltiplos de 2 e 3.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main  (){
    int i;
    int vet = 1;
    int N = 0; 
    
    printf("Informe o numero de elementos do vetor: ");
    scanf("%d", &N);
    
    int v[N];
    for ( i = 0; i < N; i++){
        printf(" Informe o elemento %d do vetor: ", vet++);
        scanf ("%d", v[i]);}
        
        
      for ( i = 0; i < N; i++){
          
     if ( v[i] % 2 == 0){
        printf ("Multiplos de 2: %d", v[i]);}
        
     if ( v[i] % 3 == 0){
        printf ("Multiplos de 3: %d", v[i]);}
     
     if (v[i] % 2 == 0 &&  v[i] % 3 == 0){
        printf ("Multiplos de 3: %d", v[i]);}
          }
     system ("pause");
     return 0; 
}
    
