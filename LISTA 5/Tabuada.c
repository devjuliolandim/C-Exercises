#include <stdio.h>
#include <locale.h>

main()
{
	char again;
	do{

		int i,j;
		char op = '0';
		setlocale(LC_ALL,"Portuguese");
		printf("Escolha uma das op��es:\n");
		printf("1 - Soma\n");
		printf("2 - Subtra��o\n");
		printf("3 - Multiplica��o\n");
		printf("4 - Todos\n");
		fflush(stdin);
		op = getchar(); //flag
		switch(op)
		{
			case '1':
				printf("Tabuada da Soma\n\n");
				for(i=1;i<=10;i++){
					printf("Tabuada do %d)\n",i);
					for(j=0;j<=10;j++){
						printf("%2d +%2d=%2d",i,j,(i+j));
						printf("\n");
					}
					printf("\n");
				}
				break;
			case '2':
				printf("Tabuada da Subtra��o\n\n");
				for(i=1;i<=10;i++){
					printf("Tabuada do %d)\n",i);
					for(j=0;j<=10;j++){
						printf("%2d -%2d=%2d",i,j,(i-j));
						printf("\n");
					}
					printf("\n");
				}
				break;
			case '3':
				printf("Tabuada da Multiplica��o\n\n");
				for(i=1;i<=10;i++){
					printf("Tabuada do %d)\n",i);
					for(j=0;j<=10;j++){
						printf("%2d *%2d=%2d\t",i,j,(i*j));
						printf("\n");
					}
					printf("\n");
				}
				break;
			case '4':
				printf("Todas as Tabuadas (Soma, Subtra��o, Multiplica��o, Divis�o, Resto)\n\n");
				for(i=1;i<=10;i++){
					printf("Tabuada do %d)\n",i);
					for(j=0;j<=10;j++){
						printf("%2d +%2d=%2d\t%2d -%2d=%2d\t%2d *%2d=%2d\t",i,j,(i+j),i,j,(i-j),i,j,(i*j));
						if(j!=0){
							printf("%2d /%2d=%2d\t%2d %% %2d=%2d",i,j,(i/j),i,j,(i%j));
						}
						printf("\n");
					}
					printf("\n");
				}
				break;
			default:
				printf("Op��o Inv�lida!\n");
		}
/*		
		if(op=='1')
		{
			printf("%2d + %2d=%2d",i,j,(i+j));
		}
		else if(op=='2')
		{
			printf("%2d - %2d=%2d",i,j,(i-j));
		}
		else if(op=='3')
		{
			printf("%2d * %2d=%2d\t",i,j,(i*j));
		}
*/				
		printf("Gostaria de executar novamente?");
		fflush(stdin);
		again = getchar();
		system("CLS");
	}while(again=='s' || again=='S');
}
