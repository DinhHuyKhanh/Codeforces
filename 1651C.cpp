#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create:10/3/2022
**/
using namespace std;
typedef   long long ll;
typedef   pair<int,int> ii;
typedef   vector<ii> vii;
typedef deque<int> dq;
typedef   unsigned long long ull;
#define ins(x)  insert(x);
#define endl  '\n'
#define tup tuple<int,int,int>
#define read(x) for(auto &i: x) cin>>i;
#define out(x) for(auto &i: x) cout<<i<<" ";
#define pb push_back
#define pf push_front
#define rsz resize
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(),x.rend()
#define sz(x) (int)(x).size()
#define f first
#define s second
#define prec(n) fixed<<setprecision(n)
#define sortpair(v) sort(v.begin(), v.end(), [](const std::pair<int,int> &left, const std::pair<int,int> &right) { return left.second < right.second; });
#define  prq priority_queue<int>
#define prgg priority_queue<int, vector<int>, greater<int> >
#define TC  1
const int mod = (int) 1e9 + 7;
const ll MOD = 972663749;

void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n),b(n);
    ll a1,a2,b1,b2;
    for(auto &i: a) cin>>i;
    for(auto &i: b) cin>>i;

    a1=a[0];
    a2= a[n-1];
    b1=b[0];
    b2= b[n-1];

    sort(all(a));
    sort(all(b));

    ll conA1, conA2, consB1, consB2;
    ll res=0;

    auto it = upper_bound(all(b), a1) - b.begin();
    if(it == 0)
    {
        conA1= b[it];
        res+=abs(b[it]-a1);
    }
    else
    {
        if(abs(b[it] - a1) > abs(b[it-1] -a1 ))
        {
            conA1 = b[it-1];
            res+= abs(b[it-1] -a1 );
        }
        else
        {
            conA1 = b[it];
            res+= abs(b[it] - a1);
        }
    }

    it = upper_bound(all(b), a2) - b.begin();
    if(it == 0)
    {
        conA2 = b[it];
        res+= abs(b[it]- a2);
    }
    else
    {
        if(abs(b[it] - a2) > abs(b[it-1] -a2 ))
        {
            conA2 = b[it-1];
            res+= abs(b[it-1] -a2 );
        }
        else
        {
            conA2 = b[it];
            res+= abs(b[it] - a2);
        }
    }

    ///


    it = upper_bound(all(a), b1) - a.begin();
    if(it == 0)
    {
        consB1= a[it];
    }
    else
    {
        if(abs(a[it] - b1) > abs(a[it-1] -b1 ))
        {
            consB1= a[it-1];
        }
        else
        {
            consB1= a[it];
        }
    }

    it = upper_bound(all(a), b2) - a.begin();
    if(it == 0)
    {
        consB2 = a[it];
    }
    else
    {
        if(abs(a[it] - b2) > abs(a[it-1] -b2 ))
        {
            consB2 = a[it-1];
        }
        else
        {
            consB2 = a[it];
        }
    }
    //
    /*if(conA1 == conA2 && consB1 == consB2)
     {
         int cnt=0, cnt1=0;
         auto x= lower_bound(all(b), conA1) - b.begin();
         while( x< sz(b) && b[x] == conA1)
         {
             ++cnt;
             ++x;
         }
         x = lower_bound(all(a), consB1) - a.begin();
         while( x< sz(a) && a[x] == consB1)
         {
             ++cnt1;
             ++x;
         }
         if(cnt > 1 && cnt1> 1)
         {
             cout<<min( abs(conA1- a1) + abs(conA1 -a2), abs(consB1- b1) + abs(consB1 -b2) )<<endl;
             return;
         }
         else
         {
             if(cnt>1)
             {
                 cout<< abs(conA1- a1) + abs(conA1 -a2)<<endl;
                 return;
             }
             if(cnt1>1)
             {
                 cout<<abs(consB1- b1) + abs(consB1 -b2)<<endl;
                 return;
             }
         }
     }
     else if(conA1 == conA2)
     {
         int cnt=0, cnt1=0;
         auto x= lower_bound(all(b), conA1) - b.begin();
         while( x< sz(b) && b[x] == conA1)
         {
             ++cnt;
             ++x;
         }
         if(cnt>1)
         {
             cout<< abs(conA1- a1) + abs(conA1 -a2)<<endl;
             return;
         }
     }
     else if(consB1==consB2)
     {
         int cnt1=0;
         auto x = lower_bound(all(a), consB1) - a.begin();
         while( x< sz(a) && a[x] == consB1)
         {
             ++cnt1;
             ++x;
         }
         if(cnt1>1)
         {
             cout<<abs(consB1- b1) + abs(consB1 -b2)<<endl;
             return;
         }
     }*/
    res= abs(conA1- a1) + abs(conA2 -a2) + abs(consB1- b1) + abs(consB2 -b2);

        if(conA1 == b1 || b1 == conA2)
        {
            res-=abs(consB1- b1);
        }
        if( (b2 == conA1 || b2== conA2))
        {
            res-=abs(consB2 -b2);
        }

    ll ans= abs(conA1- a1) + abs(conA2 -a2) + abs(consB1- b1) + abs(consB2 -b2);
    if(a1!=a2)
    {

        if(consB1 == a1 || a1 == consB2)
        {
            ans-=abs(conA1- a1);
        }
        if((a2 == consB1 || a2== consB2))
        {
            ans-=abs(conA2 -b2);
        }
    }
    cout<<min(ans,res)<<endl;
    return;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    srand((unsigned int)time(NULL));
    if(TC)
    {
        int T;
        cin>>T;
        while(T--) solve();
    }
    else
    {
        solve();
    }
    return 0;
}
