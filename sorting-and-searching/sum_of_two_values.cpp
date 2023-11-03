#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ii> vi;


void solve() {
    int n, s, l, r;
    cin >> n >> s;
    vi a(n);
    for(int i=0; i<n; ++i){
        cin >> a[i].first;
        a[i].second = i+1;
    }
    sort(a.begin(), a.end());
    vi:: iterator f, ended = (--a.end());
    bool b = false;
    int x;
    for( vi::iterator it = a.begin(); it!=ended && !b; ++it){
        x = s - it->first;
        if(x<=0) continue;
        f = lower_bound(++it, a.end(), ii(x, 0)); --it;
        if(f == a.end()) continue;
        if(f->first != x) continue;
        b = true, l = it->second, r = f->second;
    }

    if(!b) cout << "IMPOSSIBLE" << endl;
    else cout << l << ' ' << r << endl;
}


int main(){
    fastio();
    solve();
    return 0;
}
