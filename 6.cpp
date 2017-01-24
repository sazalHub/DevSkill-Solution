#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[105][105],arr[105][105],n;

ll solve(ll i,ll j)
{
    if (i==n)
        return 0;
    if (dp[i][j]!=-1)
        return dp[i][j];
    ll ret1 = arr[i][j] + solve(i+1,j);
    ll ret2 = arr[i][j] + solve(i+1,j+1);
    return dp[i][j] = max(ret1,ret2);
}

int main ()
{
    while(cin>>n)
    {
        for (ll i=0;i<n;i++)
            for (ll j=0;j<=i;j++)
                scanf("%lld",&arr[i][j]);
        memset(dp,-1,sizeof(dp));
        ll ans = solve(0,0);
        cout<<"Output: "<<ans<<endl;
    }
    return 0;
}
