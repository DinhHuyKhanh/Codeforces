#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve(map<char,int> mp,string latin)
{
    int n;
    cin>>n;
    string s,res;
    cin>>s;
    map<char,int> ch;
    for(int i=0;i<n;i++){
        ch[s[i]]++;
    }
    for(auto &x: mp){
        if(ch.find(x.first) == ch.end()){
            cout<<x.first<<"\n";
            return;
        }
    }
    res[0]='0';
    res[1]='0';
    for(int i=0;i<latin.size()-1;i++){
        for(int j=i+1;j<latin.size();j++){
            res[0]=latin[i];
            res[1]=latin[j];
            for(int k=1;k<n;k++){
              if(res[0]==s[k-1] && res[1]==s[k]){
                res[0]='0';
                res[1]='0';
                break;
              }
            }
            if(res[0]!='0'){
                cout<<res[0]<<res[1]<<"\n";
                return;
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    string latin="qwertyuiopasdfghjklzxcvbnm";
    map<char,int> mp;
    sort(latin.begin(),latin.end());
    for(int i=0;i<latin.size();i++){
        mp[latin[i]]++;
    }
    while(t--){
        solve(mp,latin);
    }

return 0;
}
