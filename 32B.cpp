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
    string s,res="";
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='-' && s[i+1]=='.'){
            res+='1';
            i++;
        }else if(s[i]=='-' && s[i+1]=='-'){
            res+='2';
            i++;

        }else if(s[i]=='.' ){
            res+='0';
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
