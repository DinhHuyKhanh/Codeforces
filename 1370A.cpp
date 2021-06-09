
#include <bits/stdc++.h>

using namespace std;
int t,x;
 int gcd(int a, int b)
 {
     for (;;)
     {
         if (a == 0) return b;
         b %= a;
         if (b == 0) return a;
         a %= b;
     }
 }
 void solve(){
    cin>>x;
    if(x%2==1){
        x-=1;
    }
    cout<<gcd(x,x/2)<<endl;
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
