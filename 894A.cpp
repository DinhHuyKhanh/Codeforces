#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s,x="";
    cin>>s;
    int res=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=='Q'|| s[i]=='A'){
            x+=s[i];
        }
    }
    for(int i=0;i<x.size();i++){
        for(int j=i;j<x.size();j++){
            for(int k=j;k<x.size();k++){
                if(x[i]=='Q' && x[j]=='A'&& x[k]=='Q') res++;
            }
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
