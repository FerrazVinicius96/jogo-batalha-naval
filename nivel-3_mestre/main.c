#include <stdio.h>

#define TAM_TAB 10
#define LINHA_HAB 3
#define COLUNA_HAB 5
#define TAM_NAVIO 3

int main(void){
    // == Tabuleiro ==
    int tabuleiro[TAM_TAB][TAM_TAB] = {0};

    // == Habilidades Especiais ==
    int hab_cone[LINHA_HAB][COLUNA_HAB] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {1, 1, 1, 1, 1}
    };
    int hab_cruz[LINHA_HAB][COLUNA_HAB] = {
        {0, 0, 1, 0, 0},
        {1, 1, 1, 1, 1},
        {0, 0, 1, 0, 0}
    };
    int hab_octaedro[LINHA_HAB][COLUNA_HAB] = {
        {0, 0, 1, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 1, 0, 0}
    };

    // == Navios ==
    int navio_h[TAM_NAVIO] = {3, 3, 3}; // horizontal
    int navio_v[TAM_NAVIO] = {3, 3, 3}; // vertical

    int linha_h = 2, coluna_h = 4; // horizontal
    int linha_v = 2, coluna_v = 5; // vertical

    // == Posicionamento do navio horizontal ==
    if (coluna_h + TAM_NAVIO <= TAM_TAB) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            tabuleiro[linha_h][coluna_h + i] = navio_h[i];
        }
    } else {
        printf("Erro: navio horizontal fora dos limites!\n");
    }

    // == Posicionamento do navio vertical ==
    if (linha_v + TAM_NAVIO <= TAM_TAB) {
        for (int i = 0; i < TAM_NAVIO; i++) {
            if (tabuleiro[linha_v + i][coluna_v] == 0) {
                tabuleiro[linha_v + i][coluna_v] = navio_v[i];
            } else {
                printf("Erro: sobreposição de navios detectada!\n");
                return 1;
            }
        }
    } else {
        printf("Erro: navio vertical fora dos limites!\n");
    }

    // == Coordenadas dos ataques ==
    int linha_ataque_cone = 4, coluna_ataque_cone = 4;
    int linha_ataque_cruz = 0, coluna_ataque_cruz = 4;
    int linha_ataque_octaedro = 3, coluna_ataque_octaedro = 2;

    // == Ataque com habilidade cone ==
    if (linha_ataque_cone + LINHA_HAB <= TAM_TAB && coluna_ataque_cone + COLUNA_HAB <= TAM_TAB) {
        for (int i = 0; i < LINHA_HAB; i++) {
            for (int j = 0; j < COLUNA_HAB; j++) {
                if (hab_cone[i][j] == 1)
                    tabuleiro[linha_ataque_cone + i][coluna_ataque_cone + j] = 9;
            }
        }
    }

    // == Ataque com habilidade cruz ==
    if (linha_ataque_cruz + LINHA_HAB <= TAM_TAB && coluna_ataque_cruz + COLUNA_HAB <= TAM_TAB) {
        for (int i = 0; i < LINHA_HAB; i++) {
            for (int j = 0; j < COLUNA_HAB; j++) {
                if (hab_cruz[i][j] == 1)
                    tabuleiro[linha_ataque_cruz + i][coluna_ataque_cruz + j] = 8;
            }
        }
    }

    // == Ataque com habilidade octaedro ==
    if (linha_ataque_octaedro + LINHA_HAB <= TAM_TAB && coluna_ataque_octaedro + COLUNA_HAB <= TAM_TAB) {
        for (int i = 0; i < LINHA_HAB; i++) {
            for (int j = 0; j < COLUNA_HAB; j++) {
                if (hab_octaedro[i][j] == 1)
                    tabuleiro[linha_ataque_octaedro + i][coluna_ataque_octaedro + j] = 7;
            }
        }
    }

    // == Impressão final do tabuleiro ==
    printf("\n=== Tabuleiro Final ===\n\n");
    for (int i = 0; i < TAM_TAB; i++) {
        for (int j = 0; j < TAM_TAB; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}