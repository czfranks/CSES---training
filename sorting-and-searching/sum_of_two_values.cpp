#include <bits/stdc++.h>
using namespace std;
 
#define debug(x) cout << #x << ' ' << x << endl;
#define fastio() ios_base::sync_with_stdio(false); \
                 cin.tie(NULL);
 
typedef long long ll;
typedef pair<ll,ll> ii;
typedef vector<ii> vi;
 
bool comp( ii p1, ii p2){
    return p1.first < p2.first;
}
 
void solve() {
    int n, s;
    cin >> n >> s;
    vi a(n);
    for(int i=0; i<n; ++i){
        cin >> a[i].first;
        a[i].second = i+1;
    }
    sort(a.begin(), a.end());
    bool b = false;
    int x, l, r, i;
    vi::iterator f, it;
    for(i=0; i<n; ++i){
        //cout << a[i].first  << ' ';
    }//cout << endl;
    for (i=0, it=a.begin(); i<n && !b; ++i, ++it){
        x = a[i].first;
        if (s - x <= 0) continue;
        //cout << "to find: " << s - x <<endl;
        if (it != a.begin()){
            f = lower_bound(a.begin(), it, ii(s - x, 0), comp);
            if(f != it && ((*f).first == s - x)){
            b = true, l = a[i].second, r = (*f).second;
            //cout << "left  posible: " << x << ' ' << s - x  << " f: " << (*f).first << endl;
            }
        }
        if (it != (--a.end()) ){
            vi::iterator it2 = it;
            ++it2;
            f = lower_bound(it2, a.end(), ii(s - x, 0), comp);
            if(f != a.end() && ((*f).first == s - x)){
            b = true, l = a[i].second, r = (*f).second;
            //cout << "right  posible: " << x << ' ' << s - x  << " f: " << (*f).first << endl;
            }
        }
    }
 
    if(!b) cout << "IMPOSSIBLE" << endl;
    else cout << l << ' ' << r << endl;
}
 
 
int main(){
    fastio();
    solve();
    return 0;
}