#include <stdio.h>

int main() {
    //mobimento da torre - 5 casas para a direita (for)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita \n");
    }

    //movimento do bispo - 5 casas na diagonal para cima e à direita (while)
    printf("\nMovimento do Bispo: \n");
    int j = 0;
    while (j < 5) {
        printf("Cima Direita \n");
        j++;
    }

    //movimento da rainha - 8 casas para a esquerda (do-while)
    printf("\nMovimento da Rainha: \n");
    int k = 0;
    do {
        printf("Esquerda \n");
        k++;
    } while (k < 8);

    //movimento do cavalo - 2 para baixo e 1 para esquerda (for + while)
    printf("\nMovimento do Cavalo: \n");
    for (int i = 0; i < 1; i++) {
        printf("Esuqerda \n");
    

    int l = 0;
    while (l < 2) {
        printf("Baixo \n");
        l++;
    }
    }
    return 0;
}

