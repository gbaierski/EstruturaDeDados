#include <stdio.h>

int main() {
    
    int X = 0;
    double Y = 0;
    double calculo = 0;
    
    scanf("%d%lf", &X, &Y);

    calculo = X/Y;
    
    printf("%.3lf km/l\n", calculo);
    return 0;
}