#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    string a;
    while(n--)
    {
          int dem=0;
        cin>>a;
       if(a.size()%2==1) cout<<"NO"<<"\n";
       else
       {
           for(int i=0;i<a.size();i++)
           {
               string s;
               s=a[i];
               if(i==0&& s==")")
               {
               dem=-1;
               break;
               }
               else if((i==a.size()-1)&&s=="(")
               {
                dem=-1;
                break;
               }

                if(s=="(") dem+=1;
               else if(s==")") dem--;
               else if(dem>0) dem--;
               else if(dem<0) dem++;
               else if(dem==0) dem++;
               }
               if(dem==0) cout<<"YES"<<"\n";
           else cout<<"NO"<<"\n";
           }
       }


return 0;
}
