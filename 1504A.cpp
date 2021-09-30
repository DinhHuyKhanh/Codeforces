#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using vi = vector<int>;
using pi = pair<int,int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
const bool testcase=1;

void solve()
{
    string s,s1,s2,s3,s4;
    cin>>s;
    s1="a"+s;
    s2=s+"a";
    s3=s1;
    reverse(s3.begin(),s3.end());
    s4= s2; reverse(s4.begin(),s4.end());
    if(s1!=s3){
        cout<<"YES\n";
        cout<<s1<<"\n";
        return;
    }
    if(s2!=s4){
        cout<<"YES\n";
        cout<<s2<<"\n";
        return;
    }
    cout<<"NO\n";

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    if(testcase){
        int t;
        cin>>t;
        while(t--) solve();
    }else{
        solve();
    }
return 0;
}
