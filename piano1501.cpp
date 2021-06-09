#include<bits/stdc++.h>

using namespace std;
int C(int k,int n){
    if(k==0||k==n) return 1;
    if(k==1) return n;
    return C(k-1,n-1) + C(k,n-1);
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,a;
    cin>>n>>a;
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    sort(arr.begin(),arr.end());
    for(int i=2;i<n;i++)
    {

    }
return 0;
}
