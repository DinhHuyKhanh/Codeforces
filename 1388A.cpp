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
    int n,k=6+10+14;
    cin>>n;
    if(n<=k){
        cout<<"NO";
        return;
    }
    cout<<"YES\n";
    if(n==36){
        cout<<5<<" "<<6<<" "<<10<<" "<<15;
    }else if(n==40){
        cout<<5<<" "<<6<<" "<<14<<" "<<15;
    }else if(n==44){
        cout<<6<<" "<<7<<" "<<10<<" "<<21;
    }else{
        cout<<6<<" "<<10<<" "<<14<<" "<<n-k;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();
    cout<<"\n";
    }
return 0;
}
