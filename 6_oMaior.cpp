#include <stdio.h>
#include <math.h>

int main() {
    int A, B, C, MaiorAB;

    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);

    MaiorAB = (A + B + abs(A - B)) / 2;
    MaiorAB = (C + MaiorAB + abs(MaiorAB - C)) / 2;
    
    printf("%d eh o maior\n", MaiorAB);
    return 0;
}