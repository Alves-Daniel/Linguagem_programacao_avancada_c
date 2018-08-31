#include <stdio.h>
int main(){
    float ap1, ap2, ap3, m, porcentagem_presenca;
    int  aula_t, presenca;
    
    printf("Informe sua nota da AP1: ");
    scanf("%f",&ap1);

    printf("Informe sua nota da AP3: ");
    scanf("%f",&ap2);

    printf("Informe sua nota da AP3: ");
    scanf("%f",&ap3);

    printf("Informe a quantidade de aulas: ");
    scanf("%d",&aula_t);

    printf("Informe a quantidade de aulas que esteve presente: ");
    scanf("%d",&presenca);

    porcentagem_presenca  = ((presenca * 100) / aula_t);
    m = ((ap1 + ap2 )* 0.3) + (ap3 * 0.4);
    
	if(m >= 5.0 && porcentagem_presenca >= 70.0){
		printf("\nVoce foi aprovado\n");
		printf("Sua media de notas foi = %.2f \n",m);
		printf("Sua porqcentagem de presenca foi = %.2f \n",porcentagem_presenca);
	    }
		else{

		printf("\n Voce foi reprovado\n");
                printf("Sua media de notas foi = %.2f \n",m);
                printf("Sua porqcentagem de presenca foi = %.2f \n",porcentagem_presenca);

		}
}
