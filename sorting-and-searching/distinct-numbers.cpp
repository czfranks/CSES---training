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
    int n;
    cin >> n;
    vi a(n);
    int x;
    for(int i=0; i<n; ++i)
        cin >> a[i];
    sort(a.begin(),a.end());
    auto last = unique(a.begin(), a.end());
    a.erase(last, a.end());
    cout << a.size() << endl;
}


int main(){
    fastio();
    solve();
    return 0;
}