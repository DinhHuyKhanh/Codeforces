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
const ll base= 31;
const ll MOD = 972663749;
/*
    vì t = a +b  trong đó a là tiền tố và b là hậu tố
    ==>  đề bài cho chuỗi s;
    giả sử chuỗi s là : t = a + m + b;
    trong đó a=b và m sẽ là k (k lớn nhất và nhỏ hơn s-a-b)  phần tử palim cạnh a hoặc cạnh b
    ==>> vấn đề đã được giải quyết
*/
const int N = 1000*1000 +10;
ll POW[N];

void buildPOW(){
    POW[0]=1;
    for(int i=1;i<=1000000;i++){
        POW[i]=(POW[i-1]*base)%MOD;
    }
}
class Hash{
private:
    string str;
    vector<ll> hashing;
public:
    Hash(string s){
        str =" "+s;
        hashing.pb(0);
        buildHash();
    }
    void buildHash(){
        int n= str.size()-1;
        for(int i=1;i<=n;i++){
            hashing.pb((hashing[i-1]*base + str[i] -'a' +1)%MOD);
        }
    }
    ll getHash  (int i,int j){
    return (hashing[j]- hashing[i-1]*POW[j-i+1] + MOD*MOD)%MOD;
    }
};
void solve()
{
    string s;
    cin>>s;
    int idx=0,n=s.size();
    while(s[idx] == s[s.size()-idx-1] && idx*2<n) idx++;
    if(idx*2>=n){
        cout<<s<<"\n";
        return;
    }

    string a= s.substr(0,idx),b=s.substr(n-idx,idx),mid,rmid,smid;
    mid = s.substr(idx,n-idx*2);
    rmid = mid;
    reverse(rmid.begin(),rmid.end());

    n= sz(mid);
    Hash h1(mid);
    Hash h2(rmid);

   for(int i=n;i>0;i--){
        if(h1.getHash(1,i) == h2.getHash(n-i+1,n)){
            smid= mid.substr(0,i);
            break;
        }
   }
   for(int i=n;i>0;i--){
        if(h1.getHash(n-i+1,n) == h2.getHash(1,i)){
            if(i>sz(smid)){
                smid= mid.substr(n-i,i);
                break;
            }else break;
        }
   }
   cout<<a<<smid<<b<<"\n";
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    buildPOW();
    int t;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}
