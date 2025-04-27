#include <bits/stdc++.h>

using namespace std;

#define endl "\n"
#define pb push_back
#define tam(z) (long long)z.size()
#define all(x) x.begin(), x.end()

typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll, ll> pll;
typedef tuple<ll, ll, ll> tll;

int main (){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    char p[11];
    scanf("%s", p);

    for(int i=0; i<strlen(p);i+=2){
        printf("%c", p[i]);
    }

    printf("\n");
    for(int i=1; i<strlen(p);i+=2){
        printf("%c", p[i]);
    }

    return 0;
}