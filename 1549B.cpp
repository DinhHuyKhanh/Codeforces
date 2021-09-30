#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 01/08/2021
* @function: B
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
    int n,res=0;
    string s1,s2;
    cin>>n>>s1>>s2;
    for(int i=0;i<n;i++){
        if(s2[i]=='1'){
            if(s1[i]=='0'){
                res++;
                continue;
            }
                if(i==0){
                    if(s1[i+1]=='1') res++, s1[i+1]='x';
                }else if(i== n-1){
                    if(s1[i-1]=='1') res++;
                }else{
                    if(s1[i-1]=='1') res++;
                    else if(s1[i+1]=='1') res++, s1[i+1]='x';
                }
        }
    }
    cout<<res<<"\n";

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
