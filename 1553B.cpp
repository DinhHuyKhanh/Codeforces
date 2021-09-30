#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()

using pi = pair<int,int>;
#define f first
#define s second
#define mp make_pair

bool ans(string s1, string s2, int i){
        string res="";
    int n=i+sz(s2);
    for(i;i<n;i++){
        res+=s1[i];
        int l= sz(s2) - sz(res),j=i-1;
        string ans=res;
        while(l-- && j>=0){
            ans+=s1[j];
            j--;
        }
        if(ans==s2) return true;
    }
    if(res==s2) return true;
    return false;
}
void solve()
{
    string s1,s2;
    cin>>s1>>s2;
    if(s1==s2){
        cout<<"YES\n";
        return;
    }
    for(int i=0;i<sz(s1);i++){
        if(s1[i]==s2[0]){
            if(ans(s1,s2,i)){
                cout<<"YES\n";
                return;
            }
        }
    }
    cout<<"NO\n";

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}
