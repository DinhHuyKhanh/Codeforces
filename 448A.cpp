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

void solve()
{
    int a1,a2,a3,b1,b2,b3,n,res=0;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
    ll medals,cups;
    medals = a1+a2+a3;
    cups= b1+b2+b3;
    res =  (medals%5)? medals/5 +1 : medals/5;
    res+= (cups%10)? cups/10 +1 : cups/10;
    if(res>n){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   solve();
return 0;
}
