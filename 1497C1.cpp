
#include <bits/stdc++.h>

using namespace std;
int64_t n,x,s;
int k,t;

 void solve(){
     cin>>n>>k;
    if(n%2==1) cout<<1<<" "<<n/2<<" "<<n/2;
    else if(n%4!=0) cout<<2<<" "<<n/2 -1<<" "<<n/2 -1;
    else if(n%4==0) cout<<n/2<<" "<<n/4<<" "<<n/4;
    cout<<"\n";
 }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>t;
    while(t--){
        solve();
    }


return 0;
}
