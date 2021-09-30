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
    int n,q,cnt1=0,cnt=0;
    cin>>n>>q;
    int a[n];

    for(auto &x: a){
        cin>>x;
        if(x==1)cnt1++;
        else cnt++;
    }

    int x,k;
    while(q--){
        cin>>x>>k;
        if(x==1){
            a[k-1]= 1-a[k-1];
            if(a[k-1]==1) cnt1++,cnt--;
            else cnt++,cnt1--;

        }else{
            if(cnt1 >=k ) cout<<1<<"\n";
            else cout<<0<<"\n";
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

return 0;
}
