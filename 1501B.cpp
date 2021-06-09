
#include <bits/stdc++.h>

using namespace std;
int t,n,x,res;

void solve(){
   cin>>n;
   vector<int> a(n+1);
    for(int i=1; i<=n;i++) cin>>a[i];
    res=0;
    for(int i=n;i>0;i--){
        if(a[i]>=res)
        {
            res= a[i];
        }
        if(res!=0){
            a[i]=1;
            res--;
        }else{
        a[i]=0;
        }
    }
    for(int i=1;i<=n;i++) cout<<a[i]<<" ";
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
