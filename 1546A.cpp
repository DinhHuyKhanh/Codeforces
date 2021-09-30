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
    int n,sum=0;
    cin>>n;
    vector<int> a(n+1,0),b(n+1,0);
    for(int i=1;i<=n;i++) cin>>a[i], sum+=a[i];
    for(int i=1;i<=n;i++) cin>>b[i] , sum-=b[i];
    if(sum!=0){
        cout<<"-1\n";
        return;
    }

        vector<pi> res;
    while(1){
        for(int i=1;i<=n;i++){
            if(a[i] < b[i]){
                for(int j=i;j<=n;j++){
                    if(a[j] > b[j]){
                       a[j]--;
                       a[i]++;
                        res.pb({j,i});
                        break;
                    }
                }
            }else if(a[i] > b[i]){
                for(int j=i;j<=n;j++){
                    if(a[j]<b[j]){
                        a[j]++;
                        a[i]--;
                        res.pb({i,j});
                        break;
                    }
                }
            }
        }
        int stt=0;
        for(int i=1;i<=n;i++){
            if(a[i]!=b[i]) stt=1;
        }
        if(stt==0) break;
    }
    cout<<res.size()<<"\n";
    for(int i=0;i<res.size();i++){
        cout<<res[i].f<<" "<<res[i].s<<"\n";
    }

}
int main() {
    /*ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);*/
    int t;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}
