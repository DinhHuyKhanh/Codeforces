#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s,res="";
    int n;
    cin>>n;
    cin>>s;

    if(s=="2020"){
        cout<<"YES\n";
        return;
    }else if(s[0]=='2' && s[1]=='0'  && s[2]=='2'  && s[3]=='0'){
        cout<<"YES\n";
        return;
    }else if(s[s.size()-4]=='2' && s[s.size()-3]=='0'  && s[s.size()-2]=='2'  && s[s.size()-1]=='0'){
        cout<<"YES\n";
        return;
    }

    for(int i=0;i<4;i++){
        res+=s[i];
        string sul=res;
     for(int j=s.size()-3+i;j<s.size();j++){
        sul+=s[j];
     }
        if(res=="2020" || sul=="2020"){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
    return;
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
