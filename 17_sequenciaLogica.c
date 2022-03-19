#include <stdio.h>

int main() {
    /* Declara as variáveis que serão utilizadas */
    int n, contador, contadorQuadrado, contadorCubo;

    /* Obtém o valor de N */
    scanf("%d", &n);
    
    /* Percorre N vezes o código contido dentro do for */
    for(contador = 1; contador <= n; contador++) {
        
        /* Eleva o valor do contador ao quadrado e ao cubo, seguindo o padrão
        de lógica exibido no exemplo */
        contadorQuadrado = contador * contador;
        contadorCubo = contador * contador * contador;
        
        /* Exibe a primeira linha, com os valores elevados */
        printf("%d %d %d\n", contador, contadorQuadrado, contadorCubo);
        
         /* Adiciona +1 nos valores, seguindo a lógica */
        printf("%d %d %d\n", contador, contadorQuadrado + 1, contadorCubo + 1);
    }
    
    return 0;
}