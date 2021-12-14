#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
using ii = pair<int,int>;
typedef vector<ii> vii;

int di[] = {1,-1,0,0};
int dj[] = {0,0,1,-1};

void solve() {
    vii a;
    int n, x, y;
    cin >> n;
    while(n--){
        cin >> x >> y;
        a.push_back(ii(x,1));
        a.push_back(ii(y,-1));
    }
    sort(a.begin(), a.end());
    int ans = 0, sm=0;
    for(auto p : a){
        sm += p.second;
        ans = max(ans, sm);
    }
    cout << ans << endl;
}


int main(){
    fastio();
    solve();
    return 0;
}