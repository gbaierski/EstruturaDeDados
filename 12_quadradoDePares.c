#include <stdio.h>

int main() {
    int N, r;
    
    scanf("%d",&N);
    for(int i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            r = i * i;
            printf("%d^2 = %d\n", i, r);
        }
    }

    return 0;
}