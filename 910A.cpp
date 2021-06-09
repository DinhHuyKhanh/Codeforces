#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n,d,res=0,st;
    string s;
    cin>>n>>d;
    cin>>s;
    for(int i=0;i<n;){
            st=0;
        for(int j=i+d;j>i;j--){
            if(s[j]=='1'){
                i=j;
                res++;
                st=1;
                break;
            }
        }
        if(i==n-1){
            cout<<res<<"\n";
            return;
        }else if(st==0){
            cout<<"-1";
            return;
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
