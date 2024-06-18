#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main() {
  int matriz[3][3];
  int soma_abaixo_diagonal = 0;
  cout << "Digite os elementos da matriz 3x3:\n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << "Elemento [" << i << "][" << j << "]: ";
      cin >> matriz[i][j];
    }
  }
  for (int i = 1; i < 3; i++) {
    for (int j = 0; j < i; j++) {
      soma_abaixo_diagonal += matriz[i][j];
    }
  }
  cout << "A soma dos elementos abaixo da diagonal principal é: "
       << soma_abaixo_diagonal << endl;
  return 0;
}
