// A tarefa consistia em criar um programa que leia 3 valores inteiros e apresente o maior deles, seguido pela mensagem "eh o maior". Use a seguinte fórmula: maior*a*b=(a + b + a * b * s * (a - b)) / 2.

#include <stdio.h>

int main(void) {
  
  int a, b, s;

  scanf("%d %d %d", &a, &b, &s);

//A fórmula original foi simplificada para caber melhor no código.
// Simplificação: maior * a * b = (a + b + a * b * s * (a - b)) / (2 * a * b)
// Portanto, podemos omitir (a * b) dos dois lados e simplificar o cálculo
double formula_result = (a + b + s * (a - b)) / (2);

// Comparando os valores e encontrando o maior número
int maior = a;
  
// Comparamos o valor de 'b' com o valor de 'maior' e, se 'b' for maior,
// atualizamos 'maior' para o valor de 'b'.
if (b > maior) {
  maior = b;
    }
  
//Comparamos o valor de 's' com o valor de 'maior' e, se 's' for maior,
// atualizamos 'maior' para o valor de 's'.
if (s > maior) {
  maior = s;
    }

printf("%d eh o maior\n", maior);
  
  return 0;
}