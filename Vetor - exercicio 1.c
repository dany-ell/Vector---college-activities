//1. Fa�a um programa que carregue um vetor com 10 elementos inteiros, calcule e mostre
//a. A quantidade de n�meros pares
//b. Quais os n�meros pares
//c. A quantidade de n�meros �mpares
//d. Quais os n�meros �mpares 

#include <stdio.h>
#include <stdlib.h>
int main (){
    int v[10];
    int i, x;
    for ( i = 0; i < 10; i++){
        printf("Insira um valor:\n");
        scanf ("%d", &v[i]);
        }  
    for ( i = 0; i < 10; i++){
        while( v[i] % 2 == 0){
               printf(" Sao %d numeros pares\n", i);
               printf ("Os valores sao : %d\n ", v[i]);
               i++;
               }
        }
    for ( i = 0; i < 10; i++){
        while ( v[i] % 2 != 0){
              printf("Sao %d numeros impares\n", i);
              printf ("Os valores sao : %d\n ",v[i]);
              i++;
              } 
         }
    system ("pause");
    return 0; 
}
