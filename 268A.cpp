#include<bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vector<int> a;
    vector<int> b;
   int result=0;
   int x,y;
    while(n--)
    {
        cin>>x>>y;
        a.push_back(x);
        b.push_back(y);
    }
    for(int k=0 ;k<a.size();k++)
    {
        for(int j=0;j<a.size();j++)
        {
            if(b[k]==a[j]) result++;
        }
    }
    cout<<result;
return 0;
}
