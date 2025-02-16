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
    char str[11];

    int n;

    scanf("%d", &n);

    while(n--){
        scanf("%s", str);
        str[strlen(str)-2]='i';
        str[strlen(str)-1]='\0';
        printf("%s", str);
    }

    return 0;
}