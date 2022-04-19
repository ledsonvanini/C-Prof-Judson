// Strings são vetors de caracteres
// terminam com '\o'
// Ex.: char dog[5] {'l','a', 't', 'i','r','\o'}
// CIN >> Lê palavras sem espaço e para no '\n'
// CIN.getline(vetor, capacidade) armazena linha inteira
// CIN.get() ou CIN.ignore() retira  '\n' ou qqer outro caracter do buffer. Assim permite interação entre CIN e CIN.getline()
// Tipo string exige o header <string>. Ele permite atribuir uma string a outra, enquanto o 'char' exige a função strcpy(destino, tamanho)



#define _CRT_SECURE_NO_WARNINGS 
#include <iostream>
#include <string>

using namespace std;

int main() 
{
  string parent = "Mom";
  const int tamVet = 30;
  char nome[tamVet];
  char sobremesa[tamVet];
  cout << "Digite seu nome: \n";
  cin.getline(nome, tamVet);

  cout << "Digite sua sobremesa \n";
  cin.getline(sobremesa, tamVet);

  cout << "Uma sobremesa de " << sobremesa << " para " << nome << endl;
  
  return 0;
}