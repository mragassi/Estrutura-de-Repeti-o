#include <stdio.h>
#include "../leitor.c"
#include <stdlib.h>
#include <time.h>

int main() {

    int saldo = 1000;
    int numero_escolhido;
    int numero_aleatorio;
    
    printf("Digite o seu nome: \n");
    char* nome = ler_texto();

    printf("Olá %s! Neste jogo você começa com 1000 pontos. Seu objetivo é chegar até os 3000 pontos\n", nome);
    printf("Cada vez que você que você acerta  o número  secreto, você ganha 300 pontos e cada  vez que você erra, perde 100\n");
    printf("Se os pontos zerar... GAME OVER!\n");

    srand(time(NULL));

    while(saldo > 0 && saldo < 3000) {

         numero_aleatorio = rand() % 10 + 1;
        
        printf("Digite o número escolhido: \n");
        numero_escolhido = ler_num_inteiro();

        if (numero_escolhido == numero_aleatorio) {
            saldo += 300;
            printf("Parabéns! Seu saldo agora é de %d pontos.\n", saldo);
        } else {
            saldo -= 100;
            printf("Que pena. Você errou! Seu saldo agora é de %d pontos.\n", saldo);
        }
    
        if (saldo <= 0) {
            printf("\nGame OVER! Você ficou sem pontos.\n");
    } 
    
        else if (saldo >= 3000) {
            printf("\nParabéns, você venceu! Seu saldo chegou a 3000 pontos ou mais.\n");
    }
}
    return 0;
}