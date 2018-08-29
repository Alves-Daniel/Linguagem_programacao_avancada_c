/*
	João recebeu seu salário e precisa pagar 2 contas atrasadas. Como as contas estão em atraso,
	João terá que pagar 2% de multa sobre cada conta. Faça um programa em C que calcule e mostre
	quanto restará do salário de João
*/

#include<stdio.h>
int main(){
    float salario,c1,c2;

    printf("Informe o valor da salario do Joao : ");
    scanf("%f",&salario);

    printf("Informe o valor da primeira conta : ");
    scanf("%f",&c1);

    printf("Informe o valor da segunda conta : ");
    scanf("%f",&c2);

    salario = salario - ((c1 + c2 ) + ((c1 + c2) * 0.2));

    printf("Joao ainda tem %.2f do seu salario ",salario);
}
