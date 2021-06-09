
#include <bits/stdc++.h>

using namespace std;
int n,a,b,res;
void solve(){
    cin>>a>>b;
    a = abs(a-b);
    res = (a==0)?0:((a<10)?(1):((a%10==0)?(a/10):(1+a/10)));
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    while(n--){
        solve();
    }


return 0;
}
