#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;

void solve() {
    int n, p;
    cin >> n;
    vi a(n, 0);
    for(int i=0; i<n; ++i)
        cin >> a[i];
    int mask;
    ll g1, g2;
    ll ans = 20*1e9+1;
    for(int i=0; i<(1<<n); ++i){
        g1 = g2 = 0;
        for(int j=0; j<n; ++j){
            mask = 1<<j;
            if(i&mask) g1 += a[j];
            else       g2 += a[j];
        }
        ans = min(ans, abs(g1-g2));
    }
    cout << ans << endl;
}


int main(){
    fastio();
    solve();
    return 0;
}