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
// sortpair(v) sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) { return left.second < right.second; });
const int mod = (int) 1e9 + 7;
const double long e= 2.71828182845904523536028747135266249775724709369995;
const double long pii= 3.14159265358979323846;

vector<double long> a;
void build(){
    double ans=1;
    a.pb(ans);
    for(int i=1;i<100010;++i){
        ans*=i;
        a.pb(ans);
    }
}
void solve()
{
    double long n;

    while(1){
        cin>>n;
        if(n==0.0) break;
        double long S=sqrt((double long) 2*pii*n)*((double long)pow(n/e,n));

        cout<<prec(20)<<(S)<<endl;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    build();
    int T;
    //cin>>T;
    T=1;
    while(T--) solve();
return 0;
}
