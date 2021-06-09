#include<bits/stdc++.h>

using namespace std;

int main(){
int n,h,b;
cin>>n>>h;
int dem;
vector<int> a;
for(int i=0;i<n;i++)
{
    cin>>b;
    a.push_back(b);
}
for(int i=0;i<a.size();i++)
{
    dem++;
    if(a[i]>h) dem++;
}
cout<<dem;

return 0;
}
