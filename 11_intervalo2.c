#include <stdio.h>

int main( void ) {
    
    int N, X;
    int contadorIn = 0, contadorOut = 0;
    
    scanf("%d", &N);
    
    do {
        scanf("%d",&X);
        
        if (X >= 10 && X <= 20) {
            contadorIn ++;
        } else {
            contadorOut ++;
        }
        
        N--;
    } while (N > 0);
    
    printf("%d in\n", contadorIn);
    printf("%d out\n", contadorOut);
    return 0;
}