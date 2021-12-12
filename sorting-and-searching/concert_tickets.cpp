#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;
typedef multiset<int> si;

int di[] = {1,-1,0,0};
int dj[] = {0,0,1,-1};

void solve() {
    int n, m, x;
    cin >> n >> m;
    si s;
    vi e;
    for(int i=0; i<n; ++i){
        cin >> x;
        s.insert(x);
    }
    for(int i=0; i<m; ++i){
        cin >> x;
        e.push_back(x);
    }
    bool ins;        //false = already exists
    si::iterator it; //current iterator
    for(auto i: e){
        it = s.find(i);
        if(s.end() == it) {ins = true; it = s.insert(i);}
        else               ins = false;
        if(ins){
            if(it == s.begin()){
                cout << -1;
                s.erase(it);
            }
            else{
                auto it2 = it;
                x = *(--it);
                cout << x;
                s.erase(it2);
                s.erase(it);
            }
        }
        else {
            cout << i;
            s.erase(it);
        }
        cout << endl;
    }
}


int main(){
    fastio();
    solve();
    return 0;
}