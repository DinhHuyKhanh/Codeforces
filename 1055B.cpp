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
int a[100000+100];
void solve()
{

    int n,m,l,cnt=0;
    cin>>n>>m>>l;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]>l){
            cnt++;
            if(a[i-1]>l) cnt--;
        }
    }
    int type,p,d;
    while(m--){
        cin>>type;
        if(type){
            cin>>p>>d;
            if(a[p]>l) continue;
            else{
                a[p]+=d;
                if(a[p]>l){
                        cnt++;
                    if(a[p-1]>l) cnt--;
                    if(a[p+1]>l) cnt--;
                }
            }
        }else{
            cout<<cnt<<"\n";
        }
    }
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
