#include <stdio.h>

#define TAM_NAVIO 3
#define TAM_TAB 10

int main(){
    //Declaração das variáveis tabuleiro e os navios;
    int tabuleiro[TAM_TAB][TAM_TAB] = {0};
    int navio_h[TAM_NAVIO] = {3, 3, 3};
    int navio_v[TAM_NAVIO] = {3, 3, 3};

    //Declaração das posições dos navios
    int linha_h = 2, coluna_h = 4; //Começa na linha 2 e coluna 4 (horizontal)
    int linha_v = 2, coluna_v = 5; // Começa na linha 5 e coluna 1 (vertical)

    //Verificação do navio dentro dos limites do tabuleiro
    if(linha_h + TAM_NAVIO <= TAM_TAB){
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[linha_h][coluna_h + i] = navio_h[i];
        }
    } else{
        printf("Navio fora dos limites do tabuleiro.");
    }

    // Verifica se o navio vertical cabe no tabuleiro
    if (linha_v + TAM_NAVIO <= TAM_TAB) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            // Verifica se já existe navio na posição (evita sobreposição)
            if (tabuleiro[linha_v + i][coluna_v] == 0) {
                tabuleiro[linha_v + i][coluna_v] = navio_v[i];
            } else {
                printf("Erro: sobreposição de navios detectada!\n");
                return 1;
            }
        }
    }

    // Exibe o tabuleiro
    printf("=== Tabuleiro Batalha Naval ===\n\n");
    for (int i = 0; i < TAM_TAB; i++) {
        for (int j = 0; j < TAM_TAB; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }



    return 0;
}