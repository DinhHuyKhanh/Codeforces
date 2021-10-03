#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 2/10/2021
**/
using namespace std;
typedef   long long ll;
typedef   pair<int,int> ii;
typedef   vector<ii> vii;
typedef   unsigned long long ull;
#define ins(x)  insert(x);
#define endl  '\n'
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
// sortpair(v) sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) { return left.second < right.second; });
const int mod = (int) 1e9 + 7;
const ll MOD = 972663749;

int a[1000+100][1000+100];
// 1 sang phari
// 2 di xuong
// 3 sang trai
void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    for(int i=1;i<=n;++i){
        for(int j=1;j<=m;++j){
            cin>>a[i][j];
        }
    }
    vector<int> b(k);
    for(auto &i: b) cin>>i;
    for(int i=0;i<k;++i){
        int row=1,col=b[i];
        while(row <=n){
            if(a[row][col]==1){
                a[row][col]=2;
                ++col;
            }else if(a[row][col] == 2){
                a[row][col]=2;
                ++row;
            }else{
                a[row][col]=2;                --col;
            }
        }
        cout<<col<<" ";
    }

}
void huykhanh(){
    int T;
    //cin>>T;
    T=1;
    while(T--) solve();
}
int main() {
    ios::sync_with_stdio(false); cin.tie(0);
    huykhanh();
return 0;
}
