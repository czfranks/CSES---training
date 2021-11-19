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
    int applicant[2 * 100001];
    int apartment[2 * 100001];
    int n, m, k, x;
    cin >> n >> m >> k;
    for(int i=0; i<n; ++i)
        cin >> applicant[i];
    for(int i=0; i<m; ++i)
        cin >> apartment[i];
    sort(applicant, applicant + n);
    sort(apartment, apartment + m);
    int ans = 0;
    for(int i=0, j=0; i<n && j<m; ){
        int x = applicant[i];
        if(x-k <= apartment[j] && apartment[j] <= x+k){
            ++j;
            ++i;
            ++ans;
        }
        else
        {
            int J = j;
            while( j<m && ! (x-k <= apartment[j] && apartment[j] <= x+k)){
                ++j;
                if(apartment[j] > x+k) j = m;
            }
            if(j == m) j = J, ++i;
        } 
    }
    cout << ans << endl;
}


int main(){
    fastio();
    solve();
    return 0;
}