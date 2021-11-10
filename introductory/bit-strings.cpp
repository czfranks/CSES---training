#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;

ll modexp(ll a , ll b, ll mod){
    ll ans = 1;
    while(b){
        if(b&1) ans = (ans*a) % mod;
        a = (a*a) % mod;
        b >>= 1;
    }
    return ans;
}

void solve() {
    ll n;
    cin >> n;
    cout << modexp(2, n, 1e9 + 7) << endl;
}


int main(){
    fastio();
    solve();
    return 0;
}