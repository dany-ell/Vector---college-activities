// 5. Ler dois vetores A e B com 10 elementos. Construir um vetor C,
// onde cada elemento de C é a soma do elemento de A com o seu
// correspondente em B, na mesma posição.

#include <stdio.h>
#include <stdlib.h>
int main  (){
    int A[10];
    int B[10];
    int C[10];
    int i = 0;
    int a = 1;
    int b = 1;
    int c = 1;
    
    for ( i = 0; i < 10; i++){
    printf ("Informe o elemento %d de A: ", a++);
    scanf ("%d", &A[i]);}
    
    for ( i = 0; i < 10; i++){
    printf ("Informe o elemento %d de B: ", b++);
    scanf ("%d", &B[i]);}
    
    for ( i = 0; i < 10; i++){
    C[i] = A[i] + B[i];
    printf(" Valor em c[%d} eh: %d\n", c++, C[i]);}
    
    system ("pause");
    return 0;
}
    
    
    
    
    
    
