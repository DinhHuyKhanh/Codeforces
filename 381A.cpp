#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int n,res=0,ans=0;
    cin>>n;
    vector<int> a(n);
    for(auto &x: a) cin>>x;
    int i=1;
    while(a.size()!=0){
        if(i&1){
           if(a[0]>a[a.size()-1]){
            res+= a[0];
            a.erase(a.begin());
           }else{
            res+= a[a.size()-1];
            a.erase(a.begin()+a.size()-1);
           }
           i++;
        }else{
         if(a[0]>a[a.size()-1]){
            ans+= a[0];
            a.erase(a.begin());
           }else{
            ans+= a[a.size()-1];
            a.erase(a.begin()+a.size()-1);
           }
           i++;
        }
    }
    cout<<res<<" "<<ans;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
