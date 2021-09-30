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

string latin ="qwertyuiopasdfghjklzxcvbnm";
void solve()
{
    string test;
    cin>>test;
    int a[26]={0},n=test.size();
    string s;

    for(int i=0;i<n;i++){
        if(test[i]=='a'){
            a[i]=1;
            s="a";
        }
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<n;j++){
            if(latin[i]==test[j]){
                if(a[j-1] ==1 || a[j+1]==1){
                    a[j]=1;
                    s+=test[j];
                }else{
                cout<<"NO\n";
                return;
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        if(s[i] != latin[i]){
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES"<<endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    sort(all(latin));
    int t;
    cin>>t;
    while(t--){
    solve();
    }
return 0;
}
