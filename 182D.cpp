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
const ll base=311;
const ll MOD = 1e18+9;

void solve()
{
    string s1,s2,res="",ans="";
    cin>>s1>>s2;
    int n1=s1.size(),n2=s2.size();
    map<char,int> a,b;
    for(int i=0;i<n1;i++){
        a[s1[i]]++;
    }
    for(int i=0;i<n2;i++){
        b[s2[i]]++;
    }
    if(a.size()!=b.size()){
        cout<<0<<"\n";
    }
    else{
        int n=a.size(),cnt=0;
        for(int i=n;i<=n1;i++){
            string s= s1.substr(0,i);
            res="",ans="";
            if(n1%i || n2%i){}
            else{
                for(int l=0;l< n1/(i);l++){
                    ans += s;
                }
                for(int l=0;l< n2/(i); l++){
                    res += s;
                }
                if(res== s2 && ans==s1) cnt++;
            }
        }
        cout<<cnt;
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

return 0;
}
