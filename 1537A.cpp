#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 18.06.2021
**/
using namespace std;
using ll = long long;
using uint = uint64_t;

void solve()
{
    int n,sum=0,res=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum+=a[i];
    }
    if(sum==n){
        res=0;
    }else if(sum<n){
    res=1;
    }else if(sum>n){
        res= sum-n;
    }
    cout<<res<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--) solve();
return 0;
}
