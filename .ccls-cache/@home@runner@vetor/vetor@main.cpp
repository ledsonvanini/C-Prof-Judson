#include <iostream>
#include <vector>

using namespace std;

// Passando vetor para função como argumento
int soma_vetor(int []);

// Vetores (Estáticos e dinâmicos)
int main() {
  // Inicialização por constante >> const <<
  // int n2[] = {} >> inicializa todos os valores com zero
  
  // Inicialização por Expressão >> constexpr <<
  // constexpr não pode ser usado para valores que ainda não foram conhecidos pelo compilador
  const int n = 3;
  constexpr int exp = 5 * sizeof(n);
  //constexpr int rnd = rand(); >> Causa erro
  // int cartas[2] = int joker[2] >> Causa erro 
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
    cout << endl;
  }

  // Teste de tamanho do vetor >> SizeOf
  int s = 30;
  cout << "Const: " << sizeof s << " bytes"<< endl;
  cout << "Array: " << sizeof(vet1) / sizeof(vet1[0]) << " bytes" << endl;

  int res = soma_vetor(qtd_batatas);
  cout << "A soma das batatas foi: "<< res << endl;

  // Classe template Vector >> Tamanho automatico
  vector<int> vec1;  
  int n3;
  cout << "Digite um valor para Vector: " << endl;
  cin >> n3;
  vector<double> vec2(n);
  
}
  

// Declaração da função que recebe vetor como arg
  int soma_vetor(int vet[])
  {
    return vet[0] + vet[1] + vet[2];
  }