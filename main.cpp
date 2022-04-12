#include <iostream>
using namespace std;

// Vetores (Estáticos e dinâmicos)

int main() {
  // Inicialização por constante >> const <<
  const int n = 30;
  // Inicialização por Expressão >> constexpr <<
  // constexpr não pode ser usado para valores que ainda não foram conhecidos pelo compilador
  constexpr int exp = 5 * sizeof(n);
  cout << "O valor da constante é " << n << endl;
  cout << "O valor da ConstEXPR é " << exp << endl;

  
}