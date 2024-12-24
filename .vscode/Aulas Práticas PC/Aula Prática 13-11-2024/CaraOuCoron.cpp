#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
  double ligacoes, garrafas;
  int porcent_ligacoes, porcent_garrafas;
 
  cin >> ligacoes >> garrafas;
 
  porcent_ligacoes = ligacoes/(ligacoes+garrafas)*100;
  porcent_garrafas = garrafas/(ligacoes+garrafas)*100;
 
  cout << porcent_ligacoes << " " << porcent_garrafas;
  
  return 0;
  
}