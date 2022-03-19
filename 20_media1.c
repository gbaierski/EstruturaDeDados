#include <stdio.h>

int main() {
    double a = 0;
    double b = 0;
    double media = 0;
    
    scanf("%lf %lf", &a, &b);
    
    media = (a*3.5 + b*7.5)/11;
    
    printf("MEDIA = %.5lf\n", media);
    return 0;
}