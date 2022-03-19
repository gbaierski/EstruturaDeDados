#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    /* Declara as variáveis que serão utilizadas */
    char frase[1000]; /* 1000 pois o valor é 50 palavras * 20 caracteres */
    int repetir = 1;
    int tautograma = 1;
    int tamanhoFrase, primeiraLetra, posicaoLetra;
    
    /* Repete "infinitamente" */
    while (repetir) {
        /* Obtém uma frase digitada pelo usuário */
        fgets(frase, 1000, stdin);
        
        /* Quando o usuário digitar o caractere "*", o programa encerra */
        if (frase[0] == '*')
            break;

        /* Obtém o valor do tamanho da string e a primeira letra (transforma em lower case) */    
        tamanhoFrase = strlen(frase);
        primeiraLetra = tolower(frase[0]);
        
        /* Percorre a string, letra por letra */
        for (posicaoLetra = 1; posicaoLetra < tamanhoFrase; posicaoLetra++) {
            /* Quando o programa encontra um espaço, verifica a próxima letra (em lower case) 
            e a compara com a primeira */
            if (frase[posicaoLetra] == ' ' && tolower(frase[posicaoLetra+1]) != primeiraLetra) {
                /* Caso seja diferente, não é um tautograma */
                tautograma = 0;
                break;
            }
        }
        
        /* Verifica e exibe se a frase é um tautograma */
        if (tautograma) {
            printf("Y\n");
            tautograma = 1;
        } else { 
            printf("N\n");
            tautograma = 1;
        }
    }
    
    return 0;
}