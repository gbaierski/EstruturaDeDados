#include <stdio.h>

int main() {
    int N, r;
    
    scanf("%d", &N);
    
    for(int i = 1; i <= 10; i++) {
        r = i * N;
        printf("%d x %d = %d\n", i, N, r);
    }
    
    return 0;
}