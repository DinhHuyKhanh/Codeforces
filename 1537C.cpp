#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:
**/
using namespace std;
using ll = long long;
using uint = uint64_t;

void solve()
{
    int n;
    cin>>n;
    vector<int> a(n),b,arr_A;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int numberic=10e9+7,brand=0,index1,index2;
    for(int i=1;i<n;i++){
        brand=a[i]-a[i-1];
        if(brand<numberic){
            numberic=brand;
            index1=i;
            index2=i-1;
            if(numberic==0) break;
        }
    }
    cout<<a[index2]<<" ";
    for(int i=index1+1;i<n;i++){
        cout<<a[i]<<" ";
    }
    for(int i=0;i<index2;i++){
        cout<<a[i]<<" ";
    }
    cout<<a[index1]<<" ";

}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
        cout<<"\n";
    }

return 0;
}
