#include<bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back
#define tam(z) (long long)z.size()
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef tuple<ll, ll, ll> tll;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int n,t,q,op,l,pos,r,ans;
    char c;
    string str;
    vector <set<int>> chars(26);

    cin >> str;
    for(int i = 0; i < str.size(); i++){
        pos = str[i]-'a';
        chars[pos].insert(i+1);
    }

    cin >> q;

    while(q--){
        cin >> op;
        if(op == 1){
            cin >> pos >> c;
            char aux = str[pos-1];
            chars[aux-'a'].erase(pos);
            chars[c-'a'].insert(pos);
            str[pos-1] = c;
        }
        else{
            cin >> l >> r;
            ans=0;
            for(int i = 0; i < 26; i++){
                if(chars[i].empty())
                    continue;

                set<int>::iterator p1 = chars[i].lower_bound(l);
                set<int>::iterator p2 = chars[i].upper_bound(r);

                if(p1 != p2){
                    ans++;
                }
            }
          cout << ans << endl;  
        }
    }

    return 0;
}