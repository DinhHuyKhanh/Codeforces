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
    int n,res=0,song;
    cin>>n;
    map<int,int> songs;
    map<int,int> lists;
    for(int i=0;i<n;i++){
        cin>>song;
        if(songs.find(song) != songs.end()){
                int ans= songs.size();
            res = max(res,ans);
            songs= lists;
        }
        songs[song]++;
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
