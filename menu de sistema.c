#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"Portuguese_Brazil");
    int opcao, opcao_os;
    while (opcao <1 || opcao >5){
        printf("\n----------------------------------\n");
        printf("------------Auto Flex-------------\n");
        printf("----------------------------------\n");
        printf("**MENU**\n");
        printf("1- Ordem de Servi�o\n");
        printf("2- Or�amento\n");
        printf("3- Financeiro\n");
        printf("4- Pe�as\n");
        printf("5- Configura��es\n");
        printf("Op��o: ");
        scanf("%d", &opcao);
        switch (opcao)
    {
        case 1: printf("ORDEM DE SERVI�O");
             break;
        case 2: printf("OR�AMENTO"); 
            break;
        case 3: printf("FINANCEIRO"); 
            break;
        case 4: printf("PE�AS"); 
            break;
        case 5: printf("CONFIGURA��ES"); 
            break;                
    
        default: printf("Op��o invalida, escolha novamente");
            break;
        }
    }
    system("pause");

}
