#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
  long long a, b, verde;
 
  cin >> a >> b;
 
  verde = (a*b)/2;
 
  if(a%2==0 || b%2 == 0){
    cout << verde;
  }else{
    cout << verde + 1;
  }
  
  return 0;
  
}