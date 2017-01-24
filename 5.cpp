#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll recur(ll a,ll b,ll c)
{
    cout<<a<<" "<<b<<" "<<c<<endl;
    if (a>b && a>c)
        return recur(a-1,b,c);
    else if (b>a && b>c)
        return recur(a,b-1,c);
    else if (c>a && c>b)
        return recur(a,b,c-1);
    else
        return (a+b+c);
}

int main ()
{
    ll a,b,c;
    while(cin>>a>>b>>c)
    {
        ll mx = max(a,max(b,c));
        ll ans;
        if (mx==a)
            ans = max(b,c)*2 + min(b,c);
        else if (mx==b)
            ans = max(a,c)*2 + min(a,c);
        else if (mx==c)
            ans = max(b,a)*2 + min(b,a);
        cout<<ans<<endl;
    }
    return 0;
}
