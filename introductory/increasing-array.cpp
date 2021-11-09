#include <bits/stdc++.h>

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;

using namespace std;

void solve() {
    int n;
    ll a[2*112345];
    cin >> n;
    for(int i=0; i<n; ++i) cin >> a[i];
    ll ans = 0;
    for(int i=1; i<n; ++i) {
        if(a[i] >= a[i-1]) continue;
        ans += a[i-1] - a[i];
        a[i] = a[i-1];
    }
    cout << ans << endl;
}


int main(){
    fastio();
    solve();
    return 0;
}