#include <stdio.h>

int main() {
    /* Declara as variáveis que serão utilizadas */
    double a, b, c, media;
    
    /* Obtém o valor das notas */
    scanf("%lf %lf %lf", &a, &b, &c);
    
    /* Calcula a média com os pesos indicados */
    media = (a * 0.2 + b * 0.3 + c * 0.5);
    
    /* Exibe o valor calculado para o usuário */
    printf("MEDIA = %.1lf\n", media);
    
    return 0;
}