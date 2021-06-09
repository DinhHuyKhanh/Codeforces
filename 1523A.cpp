#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n,m;
    cin>>n>>m;
    string s,res;
    cin>>s;
    for(int k=0;k<m;k++){
            vector<int> a;
            res=s;
        for(int i=0;i<n;i++){
           if(i==0 && s[i+1]=='1') {
                a.push_back(i);
           }
           else if(s[i]=='0'){
                if(i==n-1){
                    if(s[i-1]=='1'){
                        a.push_back(i);
                    }
                }else if(s[i-1]=='1' && s[i+1]!='1' ){
                    a.push_back(i);
                }else if(s[i-1]!='1' && s[i+1]=='1'){
                    a.push_back(i);
                }
           }
        }
        for(int t=0;t<a.size();t++){
            s[a[t]]='1';
        }
        if(s==res){
            cout<<s<<"\n";
            return;
        }
    }
    cout<<s<<"\n";


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
