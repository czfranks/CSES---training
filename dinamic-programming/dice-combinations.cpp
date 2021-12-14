#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;

int di[] = {1,-1,0,0};
int dj[] = {0,0,1,-1};

const ll MOD = 1000000007;
ll mem[7][1000010];
int dp(int dice, int sum){
    if(dice > 5 || sum < 0) return 0;
    //cout << dice << ' ' << sum << endl;
    if(sum == 0)  return 1;
    ll &ways = mem[dice][sum];
    if(ways!=-1) return ways;
    ways = (dp(1, sum-dice) + dp(dice+1, sum))%MOD; 
    return ways;
}

void solve() {
    int n;
    cin >> n;

    memset(mem, -1, sizeof mem);
    int ans = dp(1, n);
    cout << ans << endl;
}


int main(){
    fastio();
    solve();
    return 0;
}
