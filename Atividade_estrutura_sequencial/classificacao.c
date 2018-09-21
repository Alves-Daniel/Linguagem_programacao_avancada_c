#include<stdio.h>

int main(){
	int idade;
	
	printf("Inforne a idade do atleta: ");
	scanf("%d",&idade);
	
	if(idade > 6 && idade < 8){
		printf("Infantil A\n");
	}
	else if(idade > 7 && idade < 12){
		printf("Infantil B\n");
	}
	else if(idade > 11 && idade < 14){
		printf("Juvenil A\n");
	}
	else if(idade > 13 && idade < 18){
		printf("Juvenil B\n");
	}
	else if(idade > 17){
		printf("Adulto\n");
	}
	else {
		printf("Ainda nao tem idade para ser atleta, mais continue treinando\n");
	}
}
