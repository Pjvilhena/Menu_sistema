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
        printf("1- Ordem de Serviço\n");
        printf("2- Orçamento\n");
        printf("3- Financeiro\n");
        printf("4- Peças\n");
        printf("5- Configurações\n");
        printf("Opção: ");
        scanf("%d", &opcao);
        switch (opcao)
    {
        case 1: printf("ORDEM DE SERVIÇO");
             break;
        case 2: printf("ORÇAMENTO"); 
            break;
        case 3: printf("FINANCEIRO"); 
            break;
        case 4: printf("PEÇAS"); 
            break;
        case 5: printf("CONFIGURAÇÕES"); 
            break;                
    
        default: printf("Opção invalida, escolha novamente");
            break;
        }
    }
    system("pause");

}
