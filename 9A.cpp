
#include <bits/stdc++.h>

using namespace std;
int res,a,b;
void solve(){
    cin>>a>>b;
    res = (a>=b)?a:b;
    if(res==6) cout<<"1/6";
    if(res==5) cout<<"1/3";
    if(res==4) cout<<"1/2";
    if(res==3) cout<<"2/3";
    if(res==2) cout<<"5/6";
    if(res==1) cout<<"1/1";

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
return 0;
}
