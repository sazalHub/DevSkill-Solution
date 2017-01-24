#include<bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;
ll N,M,X[105],Y[105];
ll dp[61][105][105];

ll solve(ll i,ll W,ll t)
{
    ///cout<<i<<" "<<W<<endl;
    if (i>=M)
    {
        if (W==N)
        {
            ///cout<<11<<endl;
            return 1;
        }
        else
            return 0;
    }
    if (dp[t][W][i]!=-1)
    {
        ///cout<<22<<" "<<dp[W][i]<<endl;
        return dp[t][W][i];
    }
    ll ans1 = 0;
    for (ll K=X[i];K<=Y[i];K++)
    {
        ///cout<<K<<endl;
        if (W+K<=N)
            ans1 = (ans1%mod + solve(i+1,W+K,t)%mod)%mod;
        else
            break;
    }
    ///cout<<ans<<endl;
    return dp[t][W][i] = ans1%mod;
}

int main ()
{
    ll cases,caseno=0;
    ///freopen("in.txt","r",stdin);
    ///freopen("out.txt","w",stdout);
    memset(dp,-1,sizeof(dp));
    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%lld%lld",&N,&M);
        for (ll i=0;i<M;i++)
            scanf("%lld%lld",&X[i],&Y[i]);
        ll ans = solve(0,0,caseno+1);
        printf("Case %lld: %lld\n",++caseno,ans%mod);
    }
    return 0;
}
