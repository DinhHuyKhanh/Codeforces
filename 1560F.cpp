#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
typedef   long long ll;
typedef   unsigned long long ull;
#define ins(x)  insert(x);
#define endl  cout<<'\n'
#define  vi  vector<int>;
#define  pi  pair<int,int>;
#define pb push_back
#define rsz resize
#define all(x) begin(x), end(x)
#define rall(x) rbegin(x),rend(x);
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define sz(x) (int)(x).size()
#define f first
#define s second
#define mp make_pair
#define prec(n) fixed<<setprecision(n)
#define debug(n) cout<<(n)<<" "
#define debugn(n) cout<<(n)<<"\n";
#define testcase 1
const int mod = (int) 1e9 + 7;
    string s,k;
    int Max=0;
void ans1(){
    if(s[0]-'0'!=Max){
        s[0]= (s[0]-'0'+1)+'0';
    }
    string res="";
    for(int i=0;i<sz(s);i++){
        res+=s[0];
    }
    debugn(res);
}
void ans2(){
   string res="";

}
void solve()
{
    cin>>s>>k;
    string a=s;
    for(int i=0;i<sz(s);i++){
        Max=max(Max,s[i]-'0');
    }
    if(k==1){
        ans1();
    }else ans2();
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
