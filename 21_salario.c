#include <stdio.h>

int main() {
    int numeroFunc = 0;
    int qtdHoras = 0;
    double salario = 0;
    double salarioFinal = 0;
    
    scanf("%d %d %lf", &numeroFunc, &qtdHoras, &salario);
    
    salarioFinal = salario * qtdHoras;
    
    printf("NUMBER = %d\n", numeroFunc);
    printf("SALARY = U$ %.2lf\n", salarioFinal);
    
    return 0;
}