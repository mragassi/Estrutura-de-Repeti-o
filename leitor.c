#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "minhas_funcoes.c"


    char* texto;
    int num_inteiro;
    float num_decimal;
    
    char* ler_texto() {

        char* texto = malloc(60 * sizeof(char));
        fgets(texto, 60, stdin);
        texto[strcspn(texto, "\n")] = 0;

        return texto;
    }

    int ler_num_inteiro() {
        
        scanf("%d", &num_inteiro);
        getchar();

        return num_inteiro;
    }

    float ler_num_decimal() {
        
        scanf("%f", &num_decimal);
        getchar();
        
        return num_decimal;
    }
    

    // int main() {
    //     ler_texto();
    //     ler_num_inteiro();
    //     ler_num_decimal();

    //     printf("\n --- Valores Digitados ---\n");
    //     printf("Texto: %s\n", texto);
    //     printf("Número inteiro: %d\n", num_inteiro);
    //     printf("Número decimal: %f\n", num_decimal);

    //     assinatura();

    //     return 0;
    // }

    
    