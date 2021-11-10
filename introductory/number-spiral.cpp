#include <bits/stdc++.h>

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;

using namespace std;

void solve() {
    int t;
    cin >> t;
    ll y, x;
    while(t--){
        cin >> y >> x;
        if(y >= x){
            if(y&1) cout << y*y - y + 1 - (y-x) << endl;
            else    cout << y*y - x + 1         << endl;
        }
        else {
            if(x&1) cout << x*x - y + 1         << endl;
            else    cout << x*x - x + 1 - (x-y) << endl;
        }
    }
}


int main(){
    fastio();
    solve();
    return 0;
}