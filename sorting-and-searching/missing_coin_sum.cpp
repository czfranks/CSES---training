#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;
typedef vector<ll> vi;

void solve() {
    int n;
    cin >> n;
    vi a(n);
    for(int i=0; i<n; ++i) cin >> a[i];
    sort(a.begin(), a.end());
    ll sm = 1;
    for(int i=0; i<n; ++i){
        if(a[i] <= sm) sm += a[i];
        else break;
    }
    cout << sm << endl;
}

int main(){
    fastio();
    solve();
    return 0;
}