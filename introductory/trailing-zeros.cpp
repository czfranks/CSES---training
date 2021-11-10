#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;

void solve() {
    int n;
    cin >> n;
    int ans = 0;
    int quotient;
    while(n){
        quotient = n/5;
        ans += quotient;
        n = quotient;
    }
    cout << ans  << endl;
}


int main(){
    fastio();
    solve();
    return 0;
}