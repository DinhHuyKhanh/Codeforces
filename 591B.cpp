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
    int n,m;
    cin>>n>>m;

    map<char,vector<int>> mp;
    string test;

    cin>>test;

    int N=test.size();
    for(int i=0;i<N; i++){
        mp[test[i]].push_back(i);
    }

        char key1,key2;
    while(m--){
        cin>>key1>>key2;
        swap(mp[key2],mp[key1]);
    }
    for(auto x: mp){
        int M = x.second.size();
        for(int i=0;i<M;i++){
            test[x.second[i]] = x.first;
        }
    }
    cout<<test;


}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
return 0;
}
