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
    int n,Sum1=0, Sum2=0,res=0,x,k;
    cin>>n;
    k=n;
    vector<ll> a,b;
    a.pb(0),b.pb(0);
    for(int i=0;i<n;i++){
        cin>>x;
        a.pb(x);
    }
    for(int i=0;i<n;i++){
        cin>>x;
        b.pb(x);
    }
        sort(all(b));
        sort(all(a));

    for(int i=1;i<=n;i++){
        a[i]+=a[i-1];
        b[i] +=b[i-1];
    }
    Sum1= a[n]- a[n/4];
    Sum2=b[n]-b[n/4];

    while(Sum1<Sum2){
        a.pb(a[n] +100);
        n++;
        Sum1= a[n] -a[n/4];
        if(n-n/4 > k-k/4){
            if(n-n/4  >k){
                Sum2=b[k];
            }else{
                Sum2=b[k] - b[k-(n-n/4)];
            }
        }
    }
    cout<<n-k<<endl;
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
