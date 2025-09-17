#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // variáveis de escolha
    int choice_player, choice_bot;
    // iniciando srand
    srand(time(0));

    // área de interação do jogador
    printf(" ==== Jokenpô ====\n 1. Pedra\n 2. Papel\n 3. Tesoura\n Escolha uma das opções:\n");
    scanf("%d", &choice_player);
    choice_bot = rand() % 3 + 1;

    // lógica de escolha player
    switch (choice_player)
    {
    case 1:
        printf("Jogador: Pedra\n");
        break;
    case 2:
        printf("Jogador: Papel\n");
        break;
    case 3:
        printf("Jogador: Tesoura\n");
        break;
    default:
        printf("Opção inválida!");
        break;
    }    

    // lógica de escolha bot
    switch (choice_bot)
    {
    case 1:
        printf("BOT: Pedra\n");
        break;
    case 2:
        printf("BOT: Papel\n");
        break;
    case 3:
        printf("BOT: Tesoura\n");
        break;
    }

    // lógica de comparação
    if (choice_player == choice_bot){
        printf("*** JOGO EMPATADO ***");
    } else if ((choice_player == 1) && (choice_bot == 3) || (choice_player == 2) && (choice_bot == 1) || (choice_player == 3) && (choice_bot == 2)){
        printf("Parabéns, você ganhou!\n");
    } else {
        printf("Que pena, você perdeu!\n");
    }
    return 0;
}    