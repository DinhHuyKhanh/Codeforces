#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
typedef   long long ll;
typedef   unsigned long long ull;
#define ins(x)  insert(x);
#define endl  '\n'
#define  vi(x)  vector<int> x;
#define  pi   pair<int,int> x
#define tup tuple<int,int,int>
#define pb push_back
#define rsz resize
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(),x.rend()
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
#define prec(n) fixed<<setprecision(n)
#define debug(n) cout<<(n)<<" "
#define debugn(n) cout<<(n)<<"\n";
#define testcase 0
#define sortpair(v) sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) { return left.second < right.second; });
const int mod = (int) 1e9 + 7;
char ch[20][20];
void solve()
{
    int cnt=0;
    for(int i=5;i<10;++i){
        for(int j=5;j<10;++j){
                cin>>ch[i][j];
                if(ch[i][j]=='k') ++cnt;
        }
    }
    if(cnt!=9){
        cout<<"invalid";
        return;
    }

    for(int i=5;i<10;++i){
        for(int j=5;j<10;++j){
            if(ch[i][j]=='k'){
                if(ch[i+2][j+1]=='k'){
                    cout<<"invalid";
                    return;
                }
                if(ch[i+2][j-1]=='k'){
                    cout<<"invalid";
                    return;
                }
                if(ch[i-2][j+1]=='k'){
                    cout<<"invalid";
                    return;
                }
                if(ch[i-2][j+1]=='k'){
                    cout<<"invalid";
                    return;
                }
                if(ch[i+1][j+2]=='k'){
                    cout<<"invalid";
                    return;
                }
                if(ch[i-1][j+2]=='k'){
                    cout<<"invalid";
                    return;
                }
                if(ch[i+1][j-2]=='k'){
                    cout<<"invalid";
                    return;
                }
                if(ch[i-1][j-2]=='k'){
                    cout<<"invalid";
                    return;
                }
            }
        }
    }
    cout<<"valid";

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
