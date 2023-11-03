#include <bits/stdc++.h>
using namespace std;
 
#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);
 
typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ll> vi;
 
 
void solve() {
    int n;
    cin >> n;
    vi a(n);
    ll sm = 0;
    for(int i=0; i<n; ++i) cin >> a[i];
    sort(a.begin(), a.end());
    ll m = a[n/2];
    if(!(n&1)) m = (m + a[n/2-1])/2;
    for(int i=0; i<n; ++i) sm += abs(a[i]-m);
    cout << sm << endl;
}
 
 
int main(){
    fastio();
    solve();
    return 0;
}
