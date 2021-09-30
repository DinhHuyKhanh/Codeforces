#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using uint = uint64_t;

 vector<int> eratosthenes(){
    int n=100;
    vector<int> res;
    vector<bool> prime(n+1,true); // vector danh dau so nguyen to
    prime[0]=prime[1]=false;

    for(int i=2;i*i<=n;i++){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }

    for(int i=2;i<=n;i++){
        if(prime[i]){
            res.push_back(i);
        }
    }
    return res;
 }
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int> prime = eratosthenes();
    for(int i=0;i<prime.size();i++){
        if(prime[i]==n){
            if(prime[i+1] == m){
                cout<<"YES";
            }else cout<<"NO";
        }
    }

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();
return 0;
}
