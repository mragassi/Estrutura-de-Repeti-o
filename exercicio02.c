#include <stdio.h>
#include "../leitor.c"


int main() {

    int cont = 0;
    int opcao;
    float total = 0;

    printf("Por favor, digite o seu nome: ");
    char* nome = ler_texto();

    printf("Olá, %s! Seja bem-vindo à loja DOMINION\n", nome);
    free(nome);
    while(cont < 5) {
    printf("====== MENU ======\n");
    printf("[1] Camisa     (R$ 40,00)\n");
    printf("[2] Calça      (R$ 80,00)\n");
    printf("[3] Cinto      (R$ 25,00)\n");
    printf("[4] Sapatos    (R$ 120,00)\n");
    printf("[5] Chapéu     (R$ 35,00)\n");
    printf("[0] Finalizar\n");

    opcao = ler_num_inteiro();

    if (opcao == 0){

        break;

    }
    switch(opcao) {

        case 1: total += 40.0; break;
        case 2: total += 80.0; break;
        case 3: total += 25.0; break;
        case 4: total += 120.0; break;
        case 5: total += 35.0; break;
        default:
            printf("Opção inválida! Tente novamente.\n");
            continue;
       
    }

    cont++;

    }

    printf("\nTotal da compra: R$ %.2f\n", total);
    printf("Volte sempre!\n");
    
    return 0;
}