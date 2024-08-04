// Faça um programa em C que receba o total das vendas de cada
// vendedor e armazene-as em um vetor. Receba também o percentual de
// comissão de cada vendedor e armazene-os em outro vetor. Receba os
// nomes desses vendedores e armazene-os em um terceiro vetor. 
// Existem apenas dez vendedores. Calcule e mostre:
// a. Um relatório com os nomes dos vendedores e os valores a receber;
// b. O total das vendas de todos os vendedores;
// c. O maior valor a receber e quem o receberá;
// d. O menor valor a receber e quem o receberá

#include <stdio.h>
#include <stdlib.h>
int main  (){
    int v[10];
    int Q = 0;
    int i = 0;
    int j = 1;
    int k = 1;
    int vendas = 0;
    int contador = 1;
    int cont = 1;
    float total = 0;
    float c[10];
    float maior = 0;
    float menor = 0;
    
    char nome[10];
    
    for ( i = 0; i < 10 ; i++){
        
        printf ("Cite o nome do vendedor %d: ", j);
        scanf ("%s", &nome[i]);
        
        printf ("Informe a quantidade de vendas do vendedor %d: ", j);
        scanf ("%d", &v[i]);
        
        printf("Informe a comissao do vendedor %d: ", j++);
        scanf ("%f", &c[i]);
        }
        
        
            
        for ( i = 0; i < 10; i++){
        total = v[i] * c[i];
        printf ("Relatorio de vendas\n Valor a receber do Vendedor %d: %.2f\n", k++, total); // a
        }
        
        for ( i = 0; i < 10; i++){
            vendas = vendas + v[i];}
        printf ("O total de vendas: %d", vendas); // b

        for ( i = 0; i < 10; i++){
            maior = total;
            total = v[1] * c[1];
            if ( maior < total){
                 maior = total;
                 contador++;}
                 }
                 printf ("O maior valor a receber: %.2f\n O vendedor %d recebera", maior, contador); // c
                 
        for ( i = 0; i < 10; i++){
            menor = total;
            total = v[1] * c[1];
            if ( menor < total){
                 menor = total;
                 cont++;}
                 }
                 printf ("O maior valor a receber: %.2f\n O vendedor %d recebera", menor, cont); // d
                 
        
        
        for ( i = 0; i < 10; i++){
            maior = total; 
            maior = v[i] * c[i];
        maior = v[i];
        if ( v[i] > maior){
             maior = v[i];}}
        
        system ("pause");
        return 0;
}
        
