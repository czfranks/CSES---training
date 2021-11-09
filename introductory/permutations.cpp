#include <bits/stdc++.h>

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;

using namespace std;

void solve() {
    int n;
    cin >> n;
    if(n == 1) cout << 1 << endl;
    else if(n <= 3) cout << "NO SOLUTION" << endl;
    else {
        for(int i=2; i<=n; i+=2) cout << i << ' ';
        for(int i=1; i<=n; i+=2) cout << i << ' ';
        cout << endl;
    }
}


int main(){
    fastio();
    solve();
    return 0;
}