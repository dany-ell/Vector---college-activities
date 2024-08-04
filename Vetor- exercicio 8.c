// 9. Faça um programa em C que carregue um vetor com dez números
//reais, calcule e mostre a quantidade de números negativos e a soma dos
//números positivos desse vetor.

#include <stdio.h>
#include <stdlib.h>
int main  (){
    float v[10];
    int posit = 0;
    int negat = 0;
    int i = 0;
    int a = 1;
    
    for( i = 0; i < 10; i++){
    printf ("Informe o valor %d: ", a++);
    scanf ("%f", &v[i]);
    }
    
    for ( i = 0; i < 10; i++){
        if ( v[i] > 0 ){
             posit = posit + v[i];
             }
        if ( v[i] < 0){
             negat++;
             }
    }
    printf ("Sao %d numeros negativos\n", negat);
    printf ("A soma dos numeros positivos: %d\n", posit);
    system ("pause");
    return 0;
}
