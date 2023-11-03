#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ii> vi;


void solve() {
    int n, sm, tmp, x;
    tmp = 0, sm = -1;
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        cin >> x;
        if(tmp <= 0)
            tmp = 0;
        tmp += x;
        if(tmp > sm) sm = tmp;
    }
    cout << sm << endl;
}


int main(){
    fastio();
    solve();
    return 0;
}
