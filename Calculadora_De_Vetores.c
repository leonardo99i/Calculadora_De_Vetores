#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#define TAM 8

int main()
{
    setlocale(LC_ALL, "Portuguese_brazil");

    int menu, vetor1[TAM], vetor2[TAM], i, j, volta = 0, aux, escolha, posicao, valor, acc=0, soma=0, subtracao=0, multiplicacao=1, divisao=0, cont=0;
    float moda, mediana;

            printf("Leonardo Ribeiro Leonardi. RA: 21076739 \n");
            printf("\n\n");
    do
		{
		    printf("=========CALCULADORA DE VETORES========= \n");
		    printf("             MENU DE OPÇÕES \n");
		    printf("1 - Gerar vetores \n");
		    printf("2 - Imprimir vetores \n");
		    printf("3 - Eliminar elemento do vetor \n");
		    printf("4 - Pesquisar elemento nos vetores\n");
		    printf("5 - Ordenar os vetores\n");
		    printf("6 - Calcular operações matemáticas\n");
		    printf("7 - Calcular métodos estatésticos \n");
		    printf("8 - Total de elementos válidos \n");
		    printf("9 - Sair \n");
		    printf("==========================================\n");
		    printf("Escolha a op��o: ");
		    scanf("%i", &menu);

		    srand(time(NULL));


		    switch(menu)
				{

			        case 1:
			            for(i=0; i < TAM; i++){
			                vetor1[i] = rand()%500+1;
			                vetor2[i] = rand()%500+1;
			            }
			            break;

			        case 2:
			            printf("Vetor 1: \n");
			            printf("[%i - ", vetor1[0]);
			            for(i=1; i< 7; i++){
			            printf("%i - ", vetor1[i]);
			            }
			            printf(" %i]\n", vetor1[7]);
			            printf("\n\n");
			            printf("Vetor 2: \n");
			            printf("[%i - ", vetor2[0]);
			            for(i=1; i< 7; i++){
						  printf("%i - ", vetor2[i]);
			            }
			            printf(" %i]\n", vetor2[7]);
			            printf("\n\n");
			            break;

			        case 3:
			            do{
			                    printf(" Escolha de vetor \n");
			                    printf("Digite 1 para o Vetor 1 \n");
			                    printf("Digite 2 para o Vetor 2 \n");
			                    printf("\nEscolha a op��o: ");
			                    scanf("%i", &escolha);
			            }
			            while(escolha <= 0 || escolha >= 3);
			            if(escolha == 1){
			                printf("Escolha a posi��o do vetor: ");
			                scanf("%i", &posicao);
			                if((vetor1[posicao] == 0) || (posicao < 0 || posicao >= 7)){
			                        printf("\nERRO!!!\n");
			                }
			                else{
			                        vetor1[posicao] = 0;
			                        printf("\nOpera��o realizada com sucesso!\n");
			                        }
			                    }
			                    else{
                                        printf("Escolha a posi��o do vetor: ");
			                            scanf("%i", &posicao);
                                if((vetor2[posicao] == 0) || (posicao < 0 || posicao >= 7)){
                                        printf("\nERRO!!!\n");
                                }
			                    else{
                                        vetor2[posicao] = 0;
			                            printf("\nOpera��o realizada com sucesso!\n");
			                            }
			                        }
			                    break;

			        case 4:

                        scanf("%i",&valor);
                        acc = 0;
			        		for(i=0;i<2;i++)
			        			{
			        				for(j=0;j<7;j++)
			        					{
			        						if(i==0)
			        							{
			        								if(valor == vetor1[j])
			        									{
			        										acc = acc + 1;
			        										printf("\nO valor %i est� localizado na posi��o %i do Vetor 1\n", valor,j+1);//informa a localiza��o no vetor1 do n�mero informado
			        									}
												}
											else
												{
													if(valor == vetor2[j])
			        									{
			        										acc= acc + 1;
			        										printf("\nO valor %i est� localizado na posi��o %i do Vetor 2\n",valor,j+1); //informa a localiza��o no vetor2 do n�mero informado
			        									}
												}
										}

								}
							if(acc == 0)
								{
									printf("\nN�o foi encontrado o %i em nenhuma dos vetores\n", valor);//Caso o valor informado n�o exista no vetor
								}
								break;
                    case 5:
                        for(i=0;i<TAM;i++){ //Para o vetor 1
                            for(j=i;j<TAM;j++){
                                if(vetor1[i]>vetor1[j]){
                                    aux = vetor1[i];
                                    vetor1[i] = vetor1[j];
                                    vetor1[j] = aux;
                                    }
                                }
                            }
                        printf("Vetor 1: \n");
			            printf("[%i - ", vetor1[0]);
			            for(i=1;i<7;i++){
			            printf("%i - ", vetor1[i]);
			            }
			            printf(" %i]\n", vetor1[7]);

			            for(i=0;i<TAM;i++){ //Para o vetor 2
                            for(j=i;j<TAM;j++){
                                if(vetor2[i]>vetor2[j]){
                                    aux = vetor2[i];
                                    vetor2[i] = vetor2[j];
                                    vetor2[j] = aux;
                                    }
                                }
                            }
                        printf("Vetor 2: \n");
			            printf("[%i - ", vetor2[0]);
			            for(i=1; i<7; i++){
			            printf("%i - ", vetor2[i]);
			            }
			            printf(" %i]\n", vetor2[7]);
			            break;

                    case 6:
                        for(i=0;i<TAM;i++){
                            printf("SOMA \n");
                            soma = vetor1[i] + vetor2[i]; //Formula para soma
                            printf("[%i] + [%i] = %i", vetor1[i], vetor2[i], soma);
                            printf("\n\n");
                        }
                        for(i=0;i<TAM;i++){
                            printf("SUBTRA��O \n");
                            subtracao = vetor1[i] - vetor2[i]; //Formula para subtra��o
                            printf("[%i] - [%i] = %i", vetor1[i], vetor2[i], subtracao);
                            printf("\n\n");
                        }
                        for(i=0;i<TAM;i++){
                            printf("MULTIPLICA��O \n");
                            multiplicacao = vetor1[i] * vetor2[i]; //Formula para multiplica��o
                            printf("[%i] * [%i] = %i", vetor1[i], vetor2[i], multiplicacao);
                            printf("\n\n");
                        }
                        for(i=0;i<TAM;i++){
                            printf("DIVIS�O \n");
                            if(vetor2==0){ //Se o vetor for igual a 0 n�o pode ser dividido
                                printf("[%i] / [%i] = Impossivel De Dividir");
                            }
                            else{
                                divisao = vetor1[i] / vetor2[i];
                                printf("[%i] / [%i] = %i", vetor1[i], vetor2[i], divisao);
                                printf("\n\n");
                            }
                        }
                        break;

                    case 7:
                        mediana = (vetor1[3] + vetor1[4]) / 2; //Formula para calcular a mediana do vetor 1
                        printf("MEDIANA VETOR 1 = %.1f \n", mediana);
                        mediana = (vetor2[3] + vetor2[4]) / 2;  //Formula para calcular a mediana do vetor 2
                        printf("MEDIANA VETOR 2 = %.1f \n", mediana);
                        printf("\n\n");
                        break;
				    
                    case 8:
                        for(i=0;i<TAM;i++){

                            if(vetor1[i]>=1 && vetor1[i]<=500){
                                cont++;


                            }
                            else if (vetor1[i]>=1 && vetor1[i]<=500){
                                    cont++;
                                    printf("Os elementos n�o v�lidos do vetor 1 s�o %i \n ", cont);

                            }
                        }
                    printf("Os elementos v�lidos do vetor 1 s�o %i \n", cont);


                    for(i=0;i<TAM;i++){

                            if(vetor2[i]>=1 && vetor2[i]<=500){
                                cont++;

                            }
                            else if (vetor2[i]>=1 && vetor2[i]<=500){
                                    cont++;
                                    printf("Os elementos n�o v�lidos do vetor 2 s�o %i \n ", cont);

                            }
                        }
                    printf("Os elementos v�lidos do vetor 2 s�o %i \n", cont);

                        break;
				case 9:
                        exit(0); //Finalização do menu e do programa
                            }
		}
    while(volta==0);


return 0;
}
