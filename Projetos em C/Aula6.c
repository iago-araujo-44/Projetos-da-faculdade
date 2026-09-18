#include<stdio.h>
void media(int n1, int n2){
    float result;
    result=(n1+n2)/2;
     printf("A media é : %2.f \n", result);
}
int main(){
    //Variaveis
     float n1,n2;
     //Entrada de dados
     printf("Entre com a premeira nota:");
     scanf("%f",&n1);
      printf("Entre com a segunda nota:");
      scanf("%f",&n2);
      media(n1,n2);
      return 0;
}