#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n,x,y,dem=1;
    vector<int> a;
    cin>>n;
    cin>>x;
   for(int i=1;i<n;i++)
   {
       cin>>y;
       if(y>=x){
        dem++;
       }
       else
       {
           a.push_back(dem);
           dem=1;
       }
       x=y;
   }
   a.push_back(dem);
    sort(a.begin(),a.end());

    cout<<a[a.size()-1];
return 0;
}
