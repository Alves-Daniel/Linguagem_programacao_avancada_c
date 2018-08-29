/*
1.	Faça um programa que leia três notas, AP1, AP2 e AP3 e mostre a média ponderada entre elas,
    considerando peso 3 para AP1 e AP2 e peso 4 para AP3.
*/

#include <stdio.h>
int main(){
    float ap1, ap2, ap3, m;

    printf("Digite sua nota da AP1 = ");
    scanf("%f",&ap1);

    printf("Digite sua nota da AP3 = ");
    scanf("%f",&ap2);

    printf("Digite sua nota da AP3 = ");
    scanf("%f",&ap3);

    m = ((ap1 + ap2 )* 0.3) + (ap3 * 0.4);

    printf("Sua media eh = %.2f",m);
}
