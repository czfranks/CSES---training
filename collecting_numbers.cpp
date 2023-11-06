#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;
typedef vector<ll> vi;

void solve() {
    int n, x;
    cin >> n;
    vi p(n+1); // position on initial order
    for(int i=0; i<n; ++i){
        cin >> x;
        p[x] = i, a[i] = x;
    }
    int rounds = 0;
    int prevpos = -1;
    for(x=1; x<=n; ++x){
        if(prevpos > p[x]) ++rounds;
        prevpos = p[x];
    }
    cout << rounds + 1 << endl;
}

int main(){
    fastio();
    solve();
    return 0;
}