
#include <bits/stdc++.h>
using namespace std;

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

 int lcm(int a, int b)
 {
     int temp = gcd(a, b);

     return temp ? (a / temp * b) : 0;
 }

 void solve(){
     int x;
     cin>>x;
     for(int i=1;i<=x;i++){
        for(int j=x;j>=i;j--){
            if(gcd(i,j) + lcm(i,j)==x){
                cout<<i<<" "<<j<<endl;
                return;
            }
        }
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
    }


return 0;
}
