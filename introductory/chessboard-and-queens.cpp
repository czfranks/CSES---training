#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;

bool theyKill(const string& pos){
    for(int i=0; i<8; ++i){
        for(int j=0; j<8; ++j){
            if(i==j) continue;
            if(pos[i] == pos[j]) return true;
            if(abs(pos[i]-pos[j]) == abs(i-j)) return true;
        }
    }
    return false;
}

bool reserved(const string& pos, const vector<string>& a){
    for(int i=0; i<8; ++i){
        if(a[pos[i]-'0'][i] == '*') return true;
    }
    return false;
}

void solve() {
    vector<string> a(8);
    for(int i=0; i<8; ++i)
        cin >> a[i];
    string pos="01234567";
    int ans = 0;
    do {
        if(!theyKill(pos) && !reserved(pos, a)) ++ans;
    }while(next_permutation(pos.begin(), pos.end()));
    cout << ans << endl;
    
}


int main(){
    fastio();
    solve();
    return 0;
}