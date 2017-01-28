#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll power(ll base,ll pwr)
{
    ll y,ret;
    if (pwr==0)
        return 1;
    if (pwr%2==0)
    {
        y=power(base,pwr/2);
        ret=(y%mod*y%mod)%mod;
    }
    else
    {
        y=power(base,pwr/2);
        ret=((y%mod*y%mod)%mod*base%mod)%mod;
    }
    return ret;
}

int main ()
{
    ll cases,N;
    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%lld",&N);
        ll ans;
        if (N==1)
            ans = 26;
        else if (N==2)
        {
            ans = (26*26)%mod;
        }
        else if (N==3)
        {
            ans = (26*26*26)%mod;
        }
        else if (N==4)
        {
            ans = (26*26*26*26)%mod;
        }
        else
        {
            ans = (26*26*26)%mod;
            if (N%2==0)
                ans*=26,N--;
            N-=3;
            ans*=power(52,N);
        }
        printf("%lld\n",ans%mod);
    }
    return 0;
}
