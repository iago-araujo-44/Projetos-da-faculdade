#include<stdio.h>
int main()
{
int meninas , meninos, soma; 
printf("Digite o numero de meninas:");
scanf("%d", &meninas);
printf("Digite o numero de meninos ");
scanf("%d", &meninos);
//processamento 
soma=meninas+meninos;
printf("O total de alunos na sala é:""%d", soma);
//final do código 
return 0;
}