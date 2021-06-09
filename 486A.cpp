#include<bits/stdc++.h>

using namespace std;

int main()
{
     unsigned long long n;
    cin>>n;
        if(n%2==0) {
          /*  tong1 = (n/4)*(2*2+((n/2)-1)*2);
            tong2 =  (n/4)*(1*2+((n/2)-1)*2);
            cout<<tong1-tong2;
            */
            cout<<n/2;
        }
        else
            {
             /*    tong1 = (n/4)*(2*2+((n/2)-1)*2);
                tong2 =  (((n/2)+1)/2)*(1*2+((n/2))*2);
                cout<<tong1-tong2;
                 */
                 cout<<"-"<<(n+1)/2;
            }

return 0;
}
