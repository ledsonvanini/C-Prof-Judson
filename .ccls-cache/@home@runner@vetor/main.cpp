#include <iostream>
#include <vector>
using namespace std;

// Vetores (Estáticos e dinâmicos)

int main() {
  // Inicialização por constante >> const <<
  const int n = 3;
  // Inicialização por Expressão >> constexpr <<
  // constexpr não pode ser usado para valores que ainda não foram conhecidos pelo compilador
  constexpr int exp = 5 * sizeof(n);
  //constexpr int rnd = rand(); >> Causa erro
  cout << "O valor da constante é " << n << endl;
  cout << "O valor da ConstEXPR é " << exp << endl;

  // Criar e inicializar vetor
  int qtd_batatas[3] = {1,9,33};
  // Declarando o Vetor
  int vet1[n];
  int vet2[exp];



  /*for (int i = 0; i < n ; ++i)
  {
    cin >> vet1[i]; 
  }
  for (int num : vet1) 
  {
    cout << "i " << num << endl;     
  }*/
 
  for (int i : qtd_batatas)
  {
    cout << i << "\t\a"; 
  }

  // Teste de tamanho do vetor >> SizeOf
  int s = 30;
  cout << "Const: " << sizeof s << endl;
  cout << "Array: " << sizeof(vet1) / sizeof(vet1[0]) << endl;
}