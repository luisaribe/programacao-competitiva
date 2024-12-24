
#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
 
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
  long long equipes, capacidade, falta=0, i;
 
  cin >> equipes >> capacidade;
  vector<int> v(equipes);
  for(long long j=0; j<equipes; j++){
    cin >> v[j];
  }
 
  if((equipes == 1 && v[0]== 1) || (equipes == 1 && v[0]== 2) || (equipes == 2 && v[0]== 1 && v[1]==1)|| capacidade<3){
    cout << 0;
    return 0;
  }
 
  int p=equipes-1;
  for(i=0; i<equipes; i++){
    if(i*3> capacidade){
      cout << i-1 << "\n";
      break;
    }else{
        if(v[i]==0 && v[i-1]==3){
            cout << i << "\n"; 
            break;
        }else{
            if(v[i]== 0 && v[i-1]<3){
                cout << i-1 << "\n"; 
            break;
            }
        }
        
    }
    if(i==equipes-1 && 3*(i+1)<capacidade){
        falta = v[i];
        break;
    }
    if(v[i]>3){
      v[p]+=v[i]-3;
      v[i]=3;
    }
    if(v[i]==1){
        v[i]++;
        v[p]--;
        if(v[p]==0){
        p--;
      }
    }
    if(v[i]==2){
      v[i]++;
      v[p]--;
      if(v[p]==0){
        p--;
      }
    }
    
  }
 
long long k=0;
  if(falta>=3){
    for(k=3; k<falta+3; k+=3){
        if(i*3 + k > capacidade){
            cout << i+((k-3)/3);
            break;
        }
    }
  }else{
    if(falta<3 && falta >0)
    cout << i;
  }
  
  return 0;
  
}