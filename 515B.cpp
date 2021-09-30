#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
const bool testcase=0;
int a[110],b[110];

void solve()
{
    int n,m,t,g,x;
    cin>>n>>m;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x;
        a[x]=1;
    }
    cin>>g;
    for(int i=0;i<g;i++){
        cin>>x;
        b[x]=1;
        a[x%n]=1;
    }

    int N=n+m;
    for(int i=0;i<10000;i++){
        if(a[i%n] || b[i%m]) {
            a[i%n]=1,b[i%m]=1;
        }
    }
    for(int i=0;i<n;i++){
        if(a[i]==0){
            cout<<"No\n";
            return;
        }
    }
    for(int i=0;i<m;i++){
        if(b[i]==0){
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";


}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    if(testcase){
        int t;
        cin>>t;
        while(t--) solve();
    }else{
        solve();
    }
return 0;
}
