#include <bits/stdc++.h>
/**
* @author: huykhanh
* @create: 22/2/2022
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
    int n,x;
    cin>>n>>x;
    vector<ll> a(n);
    for(int i=0; i<n; ++i)
    {
        cin>>a[i];
    }
    bool bad = false;
    int l=0, r=0;
    ll sum=a[0];
    vector<int> b(3,0);
    b[0]=sum;
    for(int i=1; i<n; ++i)
    {
        if(sum+a[i]<a[i])
        {
            if(a[i]>b[0])
            {
                b[0]=a[i];
                b[1]=i;
                b[2]=i;
            }
            l=i;
            sum=a[i];
        }
        else if(sum+a[i]<sum)
        {
            r=i-1;
            if(sum> b[0])
            {
                b[0]=sum;
                b[1]=l;
                b[2]=i-1;
            }
            else if(sum==b[0])
            {
                if(i-1-l > b[2]-b[1])
                {
                    b[0]=sum;
                    b[1]=l;
                    b[2]=i-1;
                }
            }
            sum = a[i];
            l=i;
        }
        else
        {
            sum+=a[i];
        }
    }
    if(sum> b[0] )
    {
        b[0]=sum;
        b[1]=l;
        b[2]=n-1;
    }

    int maxz =-1e9, id=-1;
    for(int i=b[1]; i<=b[2]; ++i)
    {
        if(a[i]>maxz )
        {
            maxz = a[i];
            id=i;
        }
    }
    vector<int> use(n+1,0);
    for(int i=0;i<n;++i){
        use[i+1]+= use[i]+a[i];
        //cout<<use[i+1]<<" ";
    }
    l=id, r=id;
    int res=b[0],ans=b[0];
    cout<<max(0, b[0])<<" ";
    while(l>=0 || r<n)
    {
        if(l>=0)
        {
            if(r<n)
            {
                if(a[l]>a[r])
                {
                    a[l]+=x;
                    if(l>=b[1] && l<=b[2])
                    {
                        ans+=x;
                    }
                    else
                    {
                        ans+=a[l];
                        --b[1];
                    }
                    res= max(res,ans);
                    --l;
                }
                else if(use[l+1] > (use[r+l+1] - use[r]) ){
                    a[l]+=x;
                    if(l>=b[1] && l<=b[2])
                    {
                        ans+=x;
                    }
                    else
                    {
                        ans+=a[l];
                        --b[1];
                    }
                    res= max(res,ans);
                    --l;
                }
                else
                {
                    a[r]+=x;
                    if(r>=b[1] && r<=b[2])
                    {
                        ans+=x;
                    }
                    else
                    {
                        ans+=a[r];
                        ++b[2];
                    }
                    res= max(res,ans);
                    ++r;
                }
            }
            else
            {
                a[l]+=x;
                if(l>=b[1] && l<=b[2])
                {
                    ans+=x;
                }
                else
                {
                    ans+=a[l];
                    --b[1];
                }
                res=max(res,ans);
                --l;
            }
        }
        else
        {
            a[r]+=x;
            if(r>=b[1] && r<=b[2])
            {
                ans+=x;
            }
            else
            {
                ans+=a[r];
                ++b[2];
            }
            res=max(ans,res);
            ++r;
        }
        if(r==id) ++r;
        if(l==id) --l;
        if(a[l]>0){
            for(int j=l;j>=0  && a[j]>0;--j){
                if(a[j]>0 && (j<b[1] || j>b[2]) ){
                    ans+=a[j];
                    res=max(ans,res);
                    --b[1];
                }
            }
        }
        if(a[r]>0){
            for(int j=0;j<n;++j){
                for(int j=r;j<n  && a[j]>0;++j){
                if(a[j]>0 && (j<b[1] || j>b[2])){
                    ans+=a[j];
                    res=max(ans,res);
                    ++b[2];
                }
            }
            }
        }
        cout<<res<<" ";
    }
    cout<<endl;

}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
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
