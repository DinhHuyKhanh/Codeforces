#include <bits/stdc++.h>

using namespace std;

    int n,q,l,r;
    string s;
bool res(){
    cin>>l>>r;
    string s1;
    s1= s.substr(l-1,r-l+1);
    if(l==r)
    {
        return false;
    }

    for(int i=0;i<l-1;i++){
        if(s[i] == s1[0]){
             return true;
        }
    }
    for(int i=r;i<n;i++){
         if(s[i] == s1[s1.size()-1]){
             return true;
        }
    }
    return false;
}
void solve()
{
    cin>>n>>q>>s;
    while(q--) {
        if(res()==true){
            cout<<"YES\n";
        }else {
        cout<<"NO\n";
        }
    }
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
