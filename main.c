#include <stdio.h>
#include <math.h>

int calcularRafael(int x, int y){
  return pow(3*x, 2) + pow(y, 2);
}

int calcularBeto(int x, int y){
  return 2*pow(x,2) + pow(5*y,2);
}

int calcularCarlos(int x, int y){
  return -100*x + pow(y,3);
}

int main() {
 
int N;
  
int x, y = 0;

scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        scanf("%d %d", &x, &y);

       int Rafael = calcularRafael(x,y);
       int Beto = calcularBeto(x,y);
       int Carlos = calcularCarlos(x,y);

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