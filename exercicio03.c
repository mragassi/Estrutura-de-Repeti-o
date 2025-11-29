#include <stdio.h>
#include "../leitor.c"

int main() {

    int numero_secreto = 29;
    int numero_digitado;
    int cont = 1;

    printf("Digite o seu nome: ");
    char* nome = ler_texto();

    printf("Olá %s! Neste jogo, você precisa advinhar o número secreto.\n", nome);
    printf("Vamos lá?");

    while(numero_digitado != numero_secreto) {

    printf("Faça a sua %d tentativa", cont);
    numero_digitado = ler_num_inteiro();

    if(numero_digitado > numero_secreto){
        printf("O Número Digitado é maior que o Número Secreto.\n");
        printf("Tente Outra Vez.\n");
    }

    else if (numero_digitado < numero_secreto) {
        printf("O Número Digitado é menor que o Número Secreto.\n");
        printf("Tente Outra Vez.");
    }

    cont++;
    printf("Parabéns!");
    }
    
    return 0;
}