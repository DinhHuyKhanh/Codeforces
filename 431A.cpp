#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int s1,s2,s3,s4;
    ll res=0;
    string s;
    cin>>s1>>s2>>s3>>s4>>s;
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]=='1'){
            res+=s1;
        }else if(s[i]=='2'){
        res+= s2;
        }else if(s[i]=='3'){
        res+= s3;
        }else{
        res+=s4;
        }
    }
    cout<<res;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
