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
    int n;
    map<char,int> mp;
    cin>>n;
    string s;
    for(int k=0;k<n;k++){
        cin>>s;
        int N=s.size();
        for(int i=0; i<N ;i++){
            mp[s[i]]++;
        }
    }
    for(auto x: mp){
        if(x.second%n !=0){
            cout<<"NO\n";
            return;
        }
    }
    cout<<"YES\n";
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
