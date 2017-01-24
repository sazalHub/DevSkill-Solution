#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

ll ret (ll Num,ll Nu)
{
    ll cn = 0;
    while(Num%Nu==0)
    {
        Num/=Nu;
        cn++;
    }
    return cn;
}

int main ()
{
    ll cases,N,caseno=0;
    string xx;
    scanf("%lld",&cases);
    while(cases--)
    {
        cin>>xx;
        scanf("%lld",&N);
        ll num = 0;
        for (ll i=0;xx[i];i++)
            num = num*10 + (xx[i]-65);
        ll cnt = 0;
        ll div = N;
        while(num>=div)
        {
            ll tmp = num/div;
            div = div*N;
            cnt = (cnt%mod + tmp%mod)%mod;
        }
        printf("Case %lld: %lld\n",++caseno,cnt%mod);
    }
    return 0;
}
