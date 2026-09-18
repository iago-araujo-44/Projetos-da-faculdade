#include<stdio.h>
int main(){
    int cont;
    int vet[5];
    //Entrada de dados
    for(cont=0;cont<5;cont++){
        printf("Entre com um numero:");
        scanf("%d", &vet[cont]);
    }
    for(cont=0;cont<5;cont++){
        printf("\n Numero armazenado no vetor %d=%d",cont, vet[cont]);
    }
    return 0;
}