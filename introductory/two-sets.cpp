#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;

void solve() {
    ll n;
    cin >> n;
    ll sum = n*(n+1)/2;
    if ( sum&1 ) cout << "NO" << endl;
    else {
        vi a(n+1, 0);
        int counter = 0;
        sum /= 2;
        ll k=n;
        while (sum>k) {
            a[k] = 1, ++counter;
            sum -= k, --k;
        }
        a[sum] = 1, ++counter;
        cout << "YES" << endl;
        cout << counter << endl;
        for(int i=1; i<=n; ++i)
            if(a[i]) cout << i << ' ';
        cout << endl;
        cout << n - counter << endl;
        for(int i=1; i<=n; ++i)
            if(!a[i]) cout << i << ' ';
        cout << endl;
        

    }
}


int main(){
    fastio();
    solve();
    return 0;
}