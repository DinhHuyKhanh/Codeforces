#include<bits/stdc++.h>
using namespace std;

int main(){
vector <int> a;
vector <int> b;

int n,c;
cin>>n;
for(int i=1;i<=n;i++){
    cin>>c;
    a.insert(a.begin(),i,c);
}

for(int i=1;i<=a.size();i++)
{
    cout<<a[i]<<" ";
}
return 0;
}
