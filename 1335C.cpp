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
    int n,res=0,x,maxs=0,it;
    cin>>n;
    set<int> st;
    multiset<int> vals;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            st.insert(x);
            vals.insert(x);
        }
    for(auto &x: st){
        it = vals.count(x);
        maxs= maxs < it ? it : maxs;
    }
    if(maxs < st.size()){
        res= maxs;
    }else if(maxs> st.size()){
        res= st.size();
    }else res= --maxs;
    if(n==1) res=0;
    cout<<res<<"\n";
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
