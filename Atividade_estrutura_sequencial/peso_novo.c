#include<stdio.h>

int main(){
    float peso, en, em;

    printf("Informe um peso: ");
    scanf("%f",&peso);

    en = (peso + (peso * 0.15));
    em = (peso - (peso * 0.20));

    printf("Engordar = %.2f \nEmagrecer = %.2f ",en,em);
}
