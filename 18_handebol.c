#include <stdio.h>

int main() {
    /* Declara as variáveis que serão utilizadas */
    int n, m, contadorJogadores, contadorPartidas, gols;
    int contadorTotalGolsPartida = 0;
    int golsGerais = 0;

    /* Obtém o valor do número de Jogadores (N) e o número de Partidas (M) */
    scanf("%d %d", &n, &m);
    
    /* Percorre a quantidade de jogadores (linhas) */
    for (contadorJogadores = 0; contadorJogadores < n; contadorJogadores++) {
        /* Percorre a quantidade de partidas (valores em cada linha) */
        for (contadorPartidas = 0; contadorPartidas < m; contadorPartidas++) {
            /* Obtém o valor de gols em cada partida */
            scanf("%d", &gols);

            if(gols != 0) {
                /* Adiciona 1 somente se foi marcado algum gol (valor acima de 0) */
                contadorTotalGolsPartida++;
            }
        }
        
        /* Verifica se foram marcados gols em todas as partidas e adiciona 1 nos
        gols gerais caso seja verdadeiro*/
        if (contadorTotalGolsPartida == m)
            golsGerais++;
        
        /* Zera o contador de gols por partida */
        contadorTotalGolsPartida = 0;
    }
    /* Retorna o valor geral de gols */
    printf("%d\n", golsGerais);
    return 0;
}