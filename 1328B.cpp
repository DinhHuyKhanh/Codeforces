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
    ll N,k;
    cin>>N>>k;
    vector<ll> a(N,0);
    for(int i=N-2;i>=0;i--){
        a[i]=N-i-1;
        a[i]+=a[i+1];
    }

    int l=0,r=N-1,m,cur=0;
    while(l<=r){
        m=(l+r)/2;
        if(a[m] >= k){
            cur=m;
            l=m+1;
        }else  r= m-1;
    }
    int x= k - a[cur+1];
     x= N-x;
    for(int i=0;i<N;i++){
        if(i==cur || i== x){
            cout<<"b";
        }else cout<<"a";
    }
    cout<<"\n";
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
