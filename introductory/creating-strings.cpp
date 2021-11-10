#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;

void solve() {
    string s;
    cin >> s;
    set<string> ss;
    sort(s.begin(), s.end());
    do{
        ss.insert(s);
    }while(next_permutation(s.begin(),s.end())); 
    cout << ss.size() << endl;
    for(string x: ss){
        cout << x << endl;
    }
}


int main(){
    fastio();
    solve();
    return 0;
}