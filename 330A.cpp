#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair

void solve()
{
    int n,m;
    cin>>n>>m;
    map<int,int> a,b;
    char x;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                cin>>x;
                if(x=='S') a[i]++, b[j]++;
            }
        }
    int res= 0,cnt=0;
    for(int i=0;i<n;i++){
        if(a.find(i) == a.end()) cnt++;
    }

    res = m*cnt;
    for(int i=0;i<m;i++){
        if(b.find(i) ==b.end() ){
            res+= n-cnt;
        }
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

return 0;
}
