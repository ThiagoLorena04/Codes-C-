#include <stdio.h>

void aparecerjogo(char tabuleiro[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", tabuleiro[i][j]);
            if (j < 2) {
                printf("|"); // Imprime o separador entre as colunas
            }
        }
        printf("\n"); // Quebra de linha após cada linha do tabuleiro
        if (i < 2) {
            printf("---|---|---\n"); // Imprime a linha divisória entre as linhas do tabuleiro
        }
    }
}

int main() {
    char tabuleiro[3][3] = {
        {' ', ' ', ' '},
        {' ', ' ', ' '},
        {' ', ' ', ' '}
    };
    
    aparecerjogo(tabuleiro);
    
    return 0;

    //Comentários para aparecer no meu github//
    // Comentatito para o GIT DOC//
    printf("Usuario, digite sua posicao");
}
