#include<bits/stdc++.h>
#define ll long long
#define MOD 1000000009
using namespace std;

ll solve(ll n,ll p)
{
    ll cnt = 0;
    while(n!=0)
    {
        n/=p;
        cnt+=n;
        cnt%=MOD;
    }
    return cnt;
}

int main ()
{
    ll cases,caseno=0,N,P;
    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%lld%lld",&N,&P);
        printf("Case %lld: %lld\n",++caseno,solve(N,P)%MOD);
    }
    return 0;
}
