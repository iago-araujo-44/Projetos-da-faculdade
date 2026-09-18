#include<stdio.h>
int main(){
int matriz[3][3];
int linha , coluna;
//Processamento
for(linha=0;linha<3;linha++);
    { for(coluna=0;coluna<3;coluna++);{
        printf("Digite o numero");
        scanf("%d", &matriz[linha][coluna]);}
    }
    for(linha=0;linha<3;linha++)
    {
        for(coluna=0;coluna<3;coluna++)
        {
            printf("%d", &matriz[linha][coluna]);
        }
        printf("\n");
    }
    return 0;
}
