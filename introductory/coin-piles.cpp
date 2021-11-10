#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;

void solve() {
    int t; cin >> t;
    int a, b;
    while(t--){
        cin >> a >> b;
        if( (a+b)%3 == 0 && a*2 >= b && b*2 >=a ) cout << "YES" << endl;
        else                                      cout << "NO"  << endl;
    }
}


int main(){
    fastio();
    solve();
    return 0;
}