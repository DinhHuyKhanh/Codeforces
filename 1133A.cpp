#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string start, ends;
    cin>>start>>ends;
     int hh1,mm1,hh2,mm2,hh,mm;
     hh1 = atoi(start.c_str());
     hh2 = atoi(ends.c_str());
     mm1 = atoi(start.c_str() + 3);
     mm2 = atoi(ends.c_str() + 3);

    mm = (hh1+hh2)%2==0? (mm1+mm2)/2: (mm1+mm2)/2 + 30;
    hh = mm>=60? (hh1+hh2)/2 +1 : (hh1+hh2)/2;
    mm = (mm>=60)? mm-60 : mm;
    if(hh<10){
        cout<<0<<hh<<":";
    }else{
    cout<<hh<<":";
    }
    if(mm<10){
        cout<<0<<mm;
    }
    else{
        cout<<mm;
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    solve();

return 0;
}
