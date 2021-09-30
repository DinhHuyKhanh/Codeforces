#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve()
{
    int n,l,r,res=999999;
    string s;
    cin>>n>>s;
    map<pair<int,int>,int> mp;
    pair<int,int> a(0,0);
    mp[a]=0;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            a.first--;
        }else if(s[i]=='R'){
            a.first++;
        }else if(s[i]=='D'){
            a.second--;
        }else{
            a.second++;
        }

        if(mp.find(a) != mp.end()){
            int j= mp[a];
            if(i+1 - j <= res){
                res= i- j;
                l=j+1;
                r=i+1;
            }
        }
            mp[a]=i+1;
    }
    if(res!=999999){
        cout<<l<<" "<<r<<"\n";
    }else{
        cout<<-1<<"\n";
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
