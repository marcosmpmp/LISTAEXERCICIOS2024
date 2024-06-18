#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
  int matriz[3][3];
  int soma_acima_diagonal = 0;
  cout << "Digite os elementos da matriz 3x3:\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Elemento [" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }
  }
  for (int i = 0; i < 3; i++) {
    for (int j = i + 1; j < 3; j++) {
      soma_acima_diagonal += matriz[i][j];
    }
  }
  cout << "A soma dos elementos acima da diagonal principal é: "
       << soma_acima_diagonal << endl;
  return 0;
}
