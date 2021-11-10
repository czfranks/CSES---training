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
    int mask, gray;
    for(int i=0; i<(1<<n); ++i){
        gray = i^(i>>1); //base 2 to gray - method
        for(int j=0; j<n; ++j){
            mask = 1<<j;
            if(gray&mask) cout << 1;
            else       cout << 0;
        }
        cout << endl;
    }

}


int main(){
    fastio();
    solve();
    return 0;
}