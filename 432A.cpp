
#include <bits/stdc++.h>

using namespace std;
 void solve(){
     int n,k,res=0,x;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x+k<=5) res++;
    }
    cout<<res/3;
 }
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();


return 0;
}
