#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int res=0,n,ans=0;
    string s;

    cin>>n>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='x'){
            res++;
        }else{
            if(res>=3){
                ans+= res-2;
            }
            res=0;
        }
    }
    ans+= (res>=3)? res-2 : 0;
    cout<<ans;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
return 0;
}
