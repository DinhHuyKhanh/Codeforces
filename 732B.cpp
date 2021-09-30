#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int n,k,res1=0,res=0;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(i>0){
            if(a[i]+a[i-1]<k){
                res1= k-(a[i-1] + a[i]);
                res+=res1;
                a[i]+=res1;
            }
        }
    }
    cout<<res<<"\n";
    for(int i=0;i<n;i++) cout<<a[i]<<" ";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
return 0;
}
