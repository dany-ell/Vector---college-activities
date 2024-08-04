//Fazer um programa na linguagem C para ler dois vetores X e Y
//com 5 elementos. Construir um vetor Z, sendo este a junção dos dois
// outros vetores. Desta forma Z deverá ter o dobro de elementos.

#include <stdio.h>
#include <stdlib.h>
int main  (){
    int X[5];
    int Y[5];
    int Z[10];
    int i;
    int j;
    int x = 1;
    int y = 1;
    int z = 1;
    
    for ( i = 0; i < 5; i++){
    printf ("Informe o elemento %d de X: ", x++);
    scanf ("%d", &X[i]);
    }
    
    for ( j = 0; j < 5; j++){
    printf ("Informe o elemento %d de Y: ", y++);
    scanf ("%d", &Y[j]);
    }
    
    for ( i = 0; i < 5; i++){
    Z[i] = X[i];
    printf("O elemento Z[%d] eh: %d\n", z++, Z[i]);
    }
     
    for ( j = 0; j < 5; j++){
    Z[j] = Y[j];
    printf("O elemento Z[%d] eh: %d\n", z++, Z[j]);
    }
    
    system ("pause");
    return 0;
}
    
     
