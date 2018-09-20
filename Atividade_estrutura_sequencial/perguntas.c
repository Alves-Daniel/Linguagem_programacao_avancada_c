#include <stdio.h>

void main(){
	int t=5, op[t], soma;

	printf("Responta: 1 = sim. 0 = nao");

	printf("\nTelefonou para a vítima?");
	scanf("%d",&op[0]);
  	printf("Esteve no local do crime?");
	scanf("%d",&op[1]);
  	printf("Mora perto da vítima?");
	scanf("%d",&op[2]);
	printf("Devia para a vítima?");
	scanf("%d",&op[3]);
	printf("Já trabalhou com a vítima?");
	scanf("%d",&op[4]);

	soma = op[0]+ op[1]+op[2]+op[3]+op[4];

	if(soma == 2){
		printf("Suspeito\n");
	}
	else if(soma > 2 && soma < 5){
		printf("Cumplice\n");
	}
	else if(soma == 5){
		printf("Assassino\n");
	}
	else{
		printf("Inocente\n");
	}
}
