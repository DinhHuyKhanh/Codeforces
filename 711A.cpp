#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using uint = uint64_t;

void solve()
{
    int n;
    cin>>n;
    string  s,res="NO";
    vector<string> ans;
    for(int i=0;i<n;i++){
        cin>>s;
        if(s[0]=='O' && s[1]=='O' && res=="NO"){
            res="YES";
            s[0]='+';
            s[1]='+';
        }else if(s[3]=='O' && s[4]=='O' && res=="NO"){
            res="YES";
            s[3]='+';
            s[4]='+';
        }
        ans.push_back(s);
    }
    cout<<res<<"\n";
    if(res=="YES"){
    int N= ans.size();
    for(int i=0;i<N;i++){
        cout<<ans[i]<<"\n";
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
