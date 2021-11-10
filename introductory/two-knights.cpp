#include <bits/stdc++.h>

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;

using namespace std;

void solve() {
    int n;
    cin >> n;
    for(int x=1; x<=n; ++x){
        cout << x*x * (x*x-1) / 2 - 4*(x-2)*(x-1) << endl;
    }
}


int main(){
    fastio();
    solve();
    return 0;
}