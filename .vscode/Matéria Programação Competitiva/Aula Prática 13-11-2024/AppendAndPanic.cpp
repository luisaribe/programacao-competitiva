#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
  string str;
  int menor = 100, maior_indice=1;
 
  cin >> str;
 
  for(int i=0;i<str.size(); i++){
    if(str[i]<=menor){
      menor = str[i];
      maior_indice = i ;
    }
  }
 
  cout << maior_indice;
 
  return 0;
}