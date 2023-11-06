#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;
typedef vector<ll> vi;

const int N = 2e5;

void solve() { // O(2*nlogn)
    int n;
    cin >> n;
    int a[N];
    for(int i=0; i<n; ++i) 
        cin >> a[i];
    map<int, int> frec;
    int ans = 0;
    for(int i=0, j=0; i<n; ++i)    //advance i pointer
    {
        while(j<n && frec[a[j]]<1) //advance j pointer 
            frec[a[j]]++, ++j;
        frec[a[i]]--;              //refresh frecuency
        ans = max(ans, j-i);
    }   
    cout << ans << endl;
}

int main(){
    fastio();
    solve();
    return 0;
}