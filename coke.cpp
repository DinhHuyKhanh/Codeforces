#include <bits/stdc++.h>
/
* @author: huykhanh
* @create:
/
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
// sortpair(v) sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) { return left.second < right.second; });
const int mod = (int) 1e9 + 7;

void solve()
{
    int c,n1,n2,n3,res=0;
    cin>>c>>n1>>n2>>n3;
    while(c){
        if(n3){
            ++res;
            --n3, n1+=2,--c;
        }else if(n2){
            if( n2 >= c*2){
                res+= c*2,
                c=0;
            }else if(n1>=3){
                --n2,n1-=3;
                res+=4,--c;
            }else{
                res+=2;
                n2-=2;
                n1+=2;
                --c;
            }
        }else{
            res+= c*8;
            c=0;
        }
    }
    cout<<res<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int T;
    cin>>T;
    //T=1;
    while(T--) solve();
return 0;
}
