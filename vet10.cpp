#include <iostream>
#include <vector>
using namespace std;

vector<double> ler_notas(int quantidade_alunos) {
  vector<double> notas;
  double nota;
  for (int i = 0; i < quantidade_alunos; ++i) {
      cout << "Digite a nota do aluno " << i + 1 << ": ";
      cin >> nota;
      notas.push_back(nota);
  }
  return notas;
}

double calcular_media_geral(const vector<double>& notas) {
  double soma = 0.0;
  for (double nota : notas) {
      soma += nota;
  }
  return soma / notas.size();
}

int main() {
  const int quantidade_alunos = 15;

  cout << "Digite as notas dos " << quantidade_alunos << " alunos:" << endl;
  vector<double> notas = ler_notas(quantidade_alunos);

  double media_geral = calcular_media_geral(notas);

  cout << "A média geral das notas é: " << media_geral << endl;

  return 0;
}