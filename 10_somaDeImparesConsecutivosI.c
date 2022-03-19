#include <stdio.h>

int main( void ) {
    
    int x, y;
    int soma = 0;
    
    scanf("%d%d", &x, &y);
    
    for (int i = y+1; i < x; i++) {
        if (i%2 != 0) {
            soma += i;
        }
    }
    
    printf("%d\n", soma);
    return 0;
}