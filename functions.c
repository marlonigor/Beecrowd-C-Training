#include <stdio.h>
#include <math.h>

// Objetivo do programa: Determinar o vencedor entre três jogadores (Rafael, Beto e Carlos)
// com base nas coordenadas (x, y) de suas jogadas e nas respectivas pontuações.

// Função para calcular a pontuação de Rafael no passado
int calcularRafael(int x, int y){
  return pow(3 * x, 2) + pow(y, 2);
}

// Função para calcular a pontuação de Beto no passado
int calcularBeto(int x, int y){
  return 2 * pow(x, 2) + pow(5 * y, 2);
}

// Função para calcular a pontuação de Carlos no passado
int calcularCarlos(int x, int y){
  return -100 * x + pow(y, 3);
}

int main() {
 
  int N;  // Número de jogadas

  int x, y = 0;  // Coordenadas (x, y) da jogada

  // Passado: Leitura do número de jogadas
  scanf("%d", &N);

  // Passado: Loop para processar cada jogada
  for (int i = 1; i <= N; i++) {
    // Leitura das coordenadas (x, y) da jogada atual
    scanf("%d %d", &x, &y);

    // Passado: Cálculo das pontuações de cada jogador usando as funções definidas
    int Rafael = calcularRafael(x, y);
    int Beto = calcularBeto(x, y);
    int Carlos = calcularCarlos(x, y);

    // Passado: Comparação das pontuações para determinar o vencedor
    if (Rafael > Beto && Rafael > Carlos) {
      printf("Rafael ganhou\n");
    } else if (Beto > Carlos) {
      printf("Beto ganhou\n");
    } else {
      printf("Carlos ganhou\n");
    }
  }

  return 0;
}
