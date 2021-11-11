#include <bits/stdc++.h>
using namespace std;

#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);

typedef long long ll;
typedef vector<int> vi;

int di[] = {1,-1,0,0};
int dj[] = {0,0,1,-1};

//int gaa = 4000000;
int vis[8][8];
int u, v;
int counter;
void dfs(int i, int j, int deep){
    ++counter;
    vis[i][j] = 1;
    for(int k=0; k<4; ++k){
        int u = i+di[k], v = j+dj[k];
        if( u<0 ||  u>=6 || v<0 ||  v>=6 ) continue;
        if( vis[u][v] ) continue;
        dfs(u, v, deep+1);
    }
    vis[i][j] = 0;
}

void solve() {
    counter = 0;
    for(int i=0; i<7; ++i)
        for(int j=0; j<7; ++j)
            vis[i][j] = 0;
    
    dfs(0, 0, 0);
    cout << counter << endl;
}


int main(){
    fastio();
    solve();
    return 0;
}