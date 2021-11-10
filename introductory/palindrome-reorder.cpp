#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;

void solve() {
    string s; cin >> s;
    vi f('Z'+1, 0);
    for(int i=0; i<s.size(); ++i)
        f[s[i]]++;
    int odds = 0;
    int oddone;
    for(int i='A'; i<='Z'; ++i)
        if(f[i]&1){
            oddone = i;
            odds += f[i]&1;
        }
    if(odds>=2) cout << "NO SOLUTION" << endl;
    else {
        vi ans;
        for(int i='A'; i<='Z'; ++i){
            if(f[i]<=1) continue;
            for(int j=0; j<f[i]/2; ++j)
                ans.push_back(i);
        }
        for(int i: ans) cout << char(i);
        if(odds==1) cout << char(oddone);
        reverse(ans.begin(), ans.end());
        for(int i: ans) cout << char(i);
        cout << endl;
    }
}


int main(){
    fastio();
    solve();
    return 0;
}