#include <bits/stdc++.h>

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;

using namespace std;

void solve() {
    string s;
    cin >> s;
    s = s+" ";
    int n = s.size();
    int ans = 1, temp=0;
    char current = s[0];
    for(int i=0; i<n; i++){
        if(current == s[i]) ++temp;
        else{
            current = s[i];
            ans = max(ans, temp);
            temp = 0;
            --i;
        }

    }
    cout << ans << endl;
}


int main(){
    fastio();
    solve();
    return 0;
}