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
    int n;
    cin>>n;
    string s1,s2;
    map<string,string> mp;
    set<string> start,second;
    for(int i=0;i<n;i++){
        cin>>s1>>s2;
        mp[s1]=s2;
        second.insert(s2);
        if(second.find(s1) == second.end()){
            start.insert(s1);
        }
    }
    string name;
    cout<<start.size()<<"\n";
    for(auto &x : start)
    {
        cout<<x<<" ";
        name = x;
        while( mp.find(name) != mp.end() ){
            name = mp[name];
        }
        cout<<name<<"\n";
    }


}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
   solve();
return 0;
}
