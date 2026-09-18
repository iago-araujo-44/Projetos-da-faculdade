#include<stdio.h>
int main()
{float n1, n2;
int opção;
    printf("Entre com um numero:");
    scanf("%f", &n1);
    fflush(stdin);
    printf("Entre com opção desejada:"
            "\n 1. Soma"
            "\n  2.Subtrção"
            "\n 3.Dividir"
            "\n 4.Multiplicação");
    scanf("%d", &opção);
    printf("Entre com outro numero ");
    scanf("%f",&n2);
    switch (opção){
        case 1: printf("A soma entre %.2f e %2.f = %.2f", n1,n2,n1+n2);break;
        case 2: printf("A Subtração entre %.2f e %2.f = %.2f", n1,n2,n1-n2);break;
        case 3: if(n2==0){
            printf("Nenhum  numero é divisivel por 0");
        }else{printf("A Subtração entre %.2f e %2.f = %.2f", n1,n2,n1/n2);
        }break;
        case 4: printf("A multiplicacão entre %2.f e %2.f = %.2f", n1,n2,n1*n2);
    }


    return 0;
}