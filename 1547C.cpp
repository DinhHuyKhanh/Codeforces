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
    int k,n,m;
    cin>>k>>n>>m;
    vector<int> res,a(110,9999),b(110,9999);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    int i=0,j=0;
    while(i<n || j<m){
                if(a[i]<b[j]){
                    res.pb(a[i]);
                    i++;
                }else res.pb(b[j]), j++;
    }

    int N = n+m;
    for(int i=0;i<N;i++){
        if(res[i]==0) k++;
        else if(res[i] > k){
            cout<<-1<<"\n";
            return;
        }
    }
    for(int i=0;i<N;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}
