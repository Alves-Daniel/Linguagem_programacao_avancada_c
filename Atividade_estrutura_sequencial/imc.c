#include <stdio.h>

void  main()
{
	float peso, altura, imc;

	printf("Informe a altura: ");
	scanf("%f", &altura);

	printf("Infrome o peso: ");
	scanf("%f", &peso);

	imc = (peso / (altura * altura));

	if (imc >= 0.0 && imc <= 18.59)
	{
		printf("IMC: %.2f\n",imc);
		printf("Abaixo do peso\n");
	}
	else if (imc >= 18.60 && imc <= 24.99)
	{
		printf("IMC: %.2f\n",imc);
		printf("Peso ideal (parabens) \n");
	}
	else if (imc >= 25.00 && imc <= 29.99)
	{
		printf("IMC: %.2f\n",imc);
		printf("Lamentavel peso acima do peso ideal\n");
	}
	else if (imc >= 30.00 && imc <= 34.99)
	{
		 printf("IMC: %.2f\n",imc);
		 printf("Obesidade grau 1\n");

	}
	else if(imc >= 35.00 && imc <= 39.99){
		 printf("IMC: %.2f\n",imc);
		 printf("Obesidade grau 2(severa)\n");	
	} 
	else if (imc >= 40.00)
	{
		 printf("IMC: %.2f\n",imc);
 		 printf("Obesidade grau 2(Morbida)\n");
	}
}
