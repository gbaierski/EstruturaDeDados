#include <stdio.h>

int main() {
    /* Declara as variáveis que serão utilizadas */
    double x, y;

    /* Obtém o valor das coordenadas */
    scanf("%lf %lf", &x, &y);
    
    /* Nas linhas a seguir, é verificado e exibido o quadrante em que o valor 
    se encaixa, inclusive a origem e os eixos */
    if (x > 0  && y > 0) {
        printf("Q1\n");
    } 
    
    if (x < 0 && y > 0) {
        printf("Q2\n");
    }
    
    if (x < 0 && y < 0) {
        printf("Q3\n");
    }
    
    if (x > 0 && y < 0) {
        printf("Q4\n");
    }
    
    if (x == 0 && y == 0) {
        printf("Origem\n");
    }
    
    if (x == 0 && (y > 0 ||  y < 0)) {
        printf("Eixo Y\n");
    }
    
    if ((x > 0 ||  x < 0) && (y == 0)) {
        printf("Eixo X\n");
    }
    
    return 0;
}