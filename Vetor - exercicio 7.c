//Ler N elementos de um vetor A. Construir um vetor B de mesmo
//tipo em que todo elemento de B deverá ser o quadrado do elemento de A
//correspondente.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main  (){
    int i;
    int a = 1;
    int b = 1;
    int N = 0; 
    printf("Informe o numero de elementos de A: ");
    scanf("%d", &N);
    
    int A[N];
    for ( i = 0; i < N; i++){
        printf(" Informe o elemento %d de A: ", a++);
        scanf ("%d", &A[i]);
    }
    
    int B[N];
    for ( i = 0; i < N; i++){
        B[i] = pow(2, A[i]);
    printf ("O elemento B[%d] eh: %d\n", b++, B[i]);
    }
    
    system ("pause");
    return 0;
}
        
    
