#include <bits/stdc++.h>

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;

using namespace std;

void solve() {
    long long n;
    cin >> n;
    while(n > 1){
        cout << n << ' ';
        if( n&1 ) n = n*3 + 1;
        else      n = n>>1;
    }
    cout << 1 << endl;
}


int main(){
    fastio();
    solve();
    return 0;
}