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
    int s,m;
    cin>>m>>s;
    string maxx="",res;
    if(m==1 && s<10){
        cout<<s<<" "<<s<<endl;
        return;
    }
    if(s==0 || s > 9*m){
        cout<<"-1 -1";
        return;
    }
    int sm=s;
    for(int i=0;i<m;i++){
        if(sm>9){
            maxx += '9';
            sm-=9;
        }else{
            maxx +=  sm + 48;
            sm =0;
        }
    }
    res=maxx;
     reverse(maxx.begin(),maxx.end());
     if(maxx[0]=='0'){
        maxx[0]='1';
        for(int i=1;i<m;i++){
            if(maxx[i] == '0');
            else{
                maxx[i] -= 1;
                break;
            }
        }
     }
     cout<<maxx<<" "<<res;

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
return 0;
}
