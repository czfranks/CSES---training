#include <bits/stdc++.h>

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;

using namespace std;

void solve() {

    int a[2*123456];
    int n, x;
    cin >> n;
    for(int i=0; i<n-1; ++i)
        cin >> a[i];
    sort(a, a+n-1);
    int k = 1;
    for(int i=0; i<n-1; ++i, ++k){
        if(k != a[i]) break;
    }
    cout << k << endl;
}


int main(){
    fastio();
    solve();
    return 0;
}