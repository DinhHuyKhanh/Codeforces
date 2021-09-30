#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using uint = uint64_t;

void solve()
{
    int n,d=0;
    string s,res,str;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        str= s.substr(i,n);
        res+=str[d];
        d++;
    }
    cout<<res;
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
