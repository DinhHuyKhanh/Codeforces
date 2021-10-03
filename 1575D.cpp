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

void solve()
{
    string s;
    cin>>s;
    int n=sz(s);
    ll res=0;
    if(n==1){
       if(s=="0" || s=="X" || s=="_") cout<<1<<endl;
        else cout<<0<<endl;
        return;
    }
    if(s[0]=='0'){
        cout<<0<<endl;
        return;
    }
    if(s.size() == 2){
        if(s == "25" || s == "50" || s == "75" || s == "X0" || s=="_0"){
            cout<<1<<endl;
        }
        else if(s == "__" || s=="_X" || s=="X_"){
            cout<<3<<endl;
        }
        else if(s == "5X" || s == "7X" || s == "2X" || s=="2_" || s=="5_" || s== "7_" ){
            cout<<1<<endl;
        }
        else if(s == "X5" || s=="_5"){
            cout<<2<<endl;
        }
        else{
            cout<<0<<endl;
        }
        return;
    }

    ll cnt=0,cntX=0;
    for(int i=1;i+2<n;++i){
        if(s[i]=='_') ++cnt;
        if(s[i]=='X') ++cntX;
    }

    if(s[n-1]=='X' && s[n-2] =='X'){
        if(s[0]=='X'){
            cout<<0<<endl;
            return;
        }else if(s[0]=='_'){
            res=1;
            res*=9;
            res*= pow(10,cnt);
        }else{
            res=1;
            res*=pow(10,cnt);
        }
        cout<<res<<endl;
        return;
    }

    string str=s.substr(n-2,2);
    if(str=="25" || str=="00" || str=="50" || str=="75"){
            res=1;

        if(s[0]=='_'){
            res*=9;
            res*= pow(10,cnt);
            if(cntX) res*=10;
        }else if(s[0]=='X'){
            res*=9;
            res*= pow(10,cnt);
        }else{
            res*= pow(10,cnt);
            if(cntX) res*=10;
        }
        cout<<res<<endl;
        return;
    }else if(str=="__"){
        res=4;
        if(s[0]=='_'){
            res*=9;
            res*= pow(10,cnt);
            if(cntX) res*=10;
        }else if(s[0]=='X'){
            res*=9;
            res*= pow(10,cnt);
        }else{
            res*= pow(10,cnt);
            if(cntX) res*=10;
        }
        cout<<res<<endl;
        return;
    }else if(str=="2X" || str=="7X"){
        res=1;
        if(s[0]=='_'){
            res*=9;
            if(cnt) res*= pow( 10,(ll)cnt);
        }else{
            if(cnt) res*=pow(10,(ll)cnt);
        }
        cout<<res<<endl;
        return;
    }else if(str=="5X" || str=="0X"){
        if(s[0]=='X'){
            cout<<0<<endl;
            return;
        }
        res=1;
        if(s[0]=='_'){
            res*=9;
            res *= pow(10,ll(cnt));
        }else res*= pow(10,ll (cnt));
        cout<<res<<endl;
        return;
    }else if(str=="X5"){
        res=2;
        if(s[0]=='_') res*=9;
            res*= pow( 10,(ll)cnt);
        cout<<res<<endl;
        return;
    }else if(str=="X0"){
        if(s[0]=='X'){
            res=1;
            res*=pow(10,cnt);
        }else if(s[0]=='_'){
            res=2;
            res*=9;
            res*=pow(10,cnt);
        }else{
            res=2;
            res*=pow(10,cnt);
        }
        cout<<res<<endl;
        return;
    }else if(str=="0_" || str=="2_" ||str == "5_" || str=="7_"){
        res=1;
        if(s[0]=='_'){
            res*=9;
            res*= pow(10,cnt);
            if(cntX) res*=10;
        }
        else if(s[0]=='X'){
            res*=9;
            res*= pow(10,cnt);
        }else{
            res*= pow(10,(ll) cnt);
            if(cntX) res*=10;
        }
        cout<<res<<endl;
        return;
    }else if(str=="_5" || str=="_0"){
        res=2;
        if(s[0]=='_'){
            res*=9;
            res*= pow(10,cnt);
            if(cntX) res*=10;
        }else if(s[0]=='X'){
            res*=9;
            res*= pow(10,cnt);
        }else{
            res*= pow(10,cnt);
            if(cntX) res*=10;
        }
        cout<<res<<endl;
        return;
    }else if(str=="_X"){
       /* if(s[0]=='X'){
            res=2;
            res*= pow(10,cnt);
        }else if(s[0]=='_'){
            res=4;
            res*=9;
            res*=pow(10,cnt);
        }
        else{
            res=4;
            res*=pow(10,cnt);
        }
        cout<<res<<endl;
        return;*/

        if(s[0]=='X'){
            res=2;
            res*= pow(10,cnt);
        }else if(s[0]=='_'){
            res=4;
            res*=9;
            res*=pow(10,cnt);
        }else {
            res=4;
            res*=pow(10,cnt);
        }
        cout<<res<<endl;
        return;
    }else if(str=="X_"){
        if(s[0]=='X'){
            res=3;
            res*=pow(10,cnt);
        }else if(s[0]=='_'){
            res=4;
            res*=9;
            res*=pow(10,cnt);
        }else{
            res=4;
            res*= pow(10,cnt);
        }
        cout<<res<<endl;
        return;
    }
    cout<<0<<endl;
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
