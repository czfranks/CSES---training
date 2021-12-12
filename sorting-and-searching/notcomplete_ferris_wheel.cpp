#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;

int di[] = {1,-1,0,0};
int dj[] = {0,0,1,-1};

void solve() {
    int weight[2 * 100001];
    int n, x, p;
    cin >> n >> x;
    for(int i=0; i<n; ++i)
        cin >> weight[i];
    sort(weight, weight + n, greater<int>());
    for(int i=0; i<n; ++i)
        cout << weight[i] << ' ';
    cout << endl;
    int mid = ceil(n/2.0);
    int ans = mid;
    for(int j=n-1, i; j>=mid; --j){

    }
    cout << ans << endl;
}


int main(){
    fastio();
    solve();
    return 0;
}