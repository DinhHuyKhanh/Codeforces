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

void solve()
{
    vector<int> a,b,c,d;
    string s;
    int n,val,ans=0;
    cin>>n;
    for(int i=0;i<n;++i){
        cin>>s>>val;
        if(s=="11"){ // ủng hộ cả 2
            a.pb(val);
            ans+=val;
        }else if(s=="10"){ //  ủng hộ Bob
            b.pb(val);
        }else if(s=="01"){ // ủng hộ Alice
            c.pb(val);
        }else {
            d.pb(val);
        }// ủng hộ cả 2
    }

    sort(rall(a));
    sort(rall(b));
    sort(rall(c));
    sort(rall(d));
    int MIN= sz(a) + min(sz(b),sz(c));
    if(MIN==0){
        cout<<0<<'\n';
        return;
    }
    int people=MIN*2,m1=0,m2=0;
    MIN-= sz(a);

    for(int i=0;i<MIN;++i){
        ans+=b[i];
        ++m1;
    }
    for(int i=0;i<MIN;++i){
        ans+=c[i];
        ++m2;
    }

    int N=people-( m1+m2+sz(a));

    if(N==0){
        cout<<ans<<'\n';
        return;
    }

    if(sz(b)>MIN){
            int i=MIN,j=0;
        while(i<sz(b) && j<sz(d) && N>0){
            if(b[i]>d[j]){
                ans+=b[i];
                ++i;
            }else ans+= d[j], ++j;
            --N;
        }
        if(N){
            if(i<sz(b)){
                while(i<sz(b) && N>0){
                    ans+= b[i];
                    ++i,--N;
                }
            }else{
                while(j<sz(d) && N>0){
                    ans+= d[j];
                    ++j,--N;
                }
            }
        }
    }else if(sz(c) >MIN){
              int i=MIN,j=0;
        while(i<sz(c) && j<sz(d) && N>0){
            if(c[i]>d[j]){
                ans+=c[i];
                ++i;
            }else ans+= d[j], ++j;
            --N;
        }
        if(N){
            if(i<sz(c)){
                while(i<sz(c) && N>0){
                    ans+= c[i];
                    ++i,--N;
                }
            }else{
                while(j<sz(d) && N>0){
                    ans+= d[j];
                    ++j,--N;
                }
            }
        }
    }else{
        for(int i=0;i<min(N,sz(d));++i) ans+=d[i];
    }
    cout<<ans<<endl;




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
