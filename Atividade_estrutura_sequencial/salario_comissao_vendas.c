/*
    Um funcionário recebe um salário mais 4% de comissão fixa sobre as vendas.
    Faça um programa que leia o salário fixo do funcionário e o valor de suas vendas.
    Calcule e mostre a comissão e o salário final do funcionário.
*/

#include<stdio.h>
int main(){
    float salario, venda;

    printf("Informe o valor da salario: ");
    scanf("%f",&salario);
    printf("Informe o valor das vendas: ");
    scanf("%f",&venda);

    venda = venda * 0.4;
    salario = salario + venda;

    printf("valor da comissao eh = %.2f \nValor do salario final eh = %.2f",venda,salario);
}
