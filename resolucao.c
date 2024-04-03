#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int n1,n2,i,p = 0,soma,subtracao,fatorial = 1;
float multiplicacao,divisao,potencia = 1;

void somar(int n1, int n2){
	soma = n1 + n2;
	printf("\n%d + %d = %d", n1, n2, soma);

	printf("\n");
	system("Pause");
	
}//fim somar

void subtrair(int n1, int n2){
	subtracao = n1 - n2;
	printf("\n%d - %d = %d", n1, n2, subtracao);

	printf("\n");
	system("Pause");
	
}//fim subtrair

void multipicar(int n1, int n2){
	multiplicacao = n1 * n2;
	printf("\n%d * %d = %.2f", n1, n2, multiplicacao);

	printf("\n");
	system("Pause");
	
}//fim multipicar

void dividir(int n1, int n2){
	if(n2 == 0){
		printf("\nNao e possivel divisao por 0");
	}else{
		divisao = n1 / (float)n2;
		printf("\n%d / %d = %.2f", n1, n2, divisao);

	}
	printf("\n");
	system("Pause");
}//fim dividir

void potenciacao(int n1, int n2){
	for(p = 1; p <= n2; p ++){
		potencia *= n1;
	}
	printf("\n%d ^ %d = %.2f",n1,n2,potencia);

	potencia = 1;
	printf("\n");
	system("Pause");
}//fim potenciacao

void fator(int n1){
	if(n1 <= 0){
		printf("\nO valor nao e um numero inteiro");
	}else{
		printf("\n");
		for(i = 1; i <= n1; i ++){
			fatorial *= i;
			printf("%d",i);
			printf(" * ");
		}
		printf("= %d",fatorial);
		fatorial = 1;
	}	
	printf("\n");
	system("Pause");
}//fim fator


void main(){
	int menu;
	do{
		system("cls");
		printf("\n=============CALCULADORA=============\n");
		printf("\n1 - SOMA");
		printf("\n2 - SUBTRACAO");
		printf("\n3 - MULTIPLICACAO");
		printf("\n4 - DIVISAO");
		printf("\n5 - POTENCIACAO");
		printf("\n6 - FATORIAL");

		printf("\n0 - SAIR");
		printf("\n>>> ");
		scanf("%d",&menu);
		
		switch(menu){
			case 1:
				system("cls");
				printf("\n-----------SOMA-----------");
				printf("\nDigite o primeiro numero: ");
				scanf("%d",&n1);
				printf("Digite o segundo numero: ");
				scanf("%d",&n2);
				somar(n1,n2);
				system("cls");
				break;
			case 2:
				system("cls");
				printf("\n-----------SUBTRACAO-----------");
				printf("\nDigite o primeiro numero: ");
				scanf("%d",&n1);
				printf("Digite o segundo numero: ");
				scanf("%d",&n2);
				subtrair(n1,n2);
				system("cls");
				break;
			case 3:
				system("cls");
				printf("\n-----------MULTIPLICACAO-----------");
				printf("\nDigite o primeiro numero: ");
				scanf("%d",&n1);
				printf("Digite o segundo numero: ");
				scanf("%d",&n2);
				multipicar(n1,n2);
				system("cls");
				break;
			case 4:
				system("cls");
				printf("\n-----------DIVISAO-----------");
				printf("\nDigite o primeiro numero: ");
				scanf("%d",&n1);
				printf("Digite o segundo numero: ");
				scanf("%d",&n2);
				dividir(n1,n2);
				system("cls");
				break;
			case 5:
				system("cls");
				printf("\n-----------POTENCIACAO-----------");
				printf("\nDigite o primeiro numero: ");
				scanf("%d",&n1);
				printf("Digite o segundo numero: ");
				scanf("%d",&n2);
				potenciacao(n1,n2);
				system("cls");
				break;
			case 6:
				system("cls");
				printf("\n-----------FATORIAL-----------");
				printf("\nDigite um numero inteiro: ");
				scanf("%d",&n1);
				fator(n1);
				system("cls");
				break;
			case 0:
				break;
			default:
				system("cls");
				printf("\nOpcao invalida");
				break;
		}
		
	}while(menu != 0);

}//fim main