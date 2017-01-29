#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll power[1010199];
map<ll,bool>vis;
ll len,L,R,upr,lwr;

void solve()
{
    ll mul,k=0;
    for(ll i=2;i<=1000000;i++)
    {
        mul = i;
        for (ll j=2;;j++)
        {
            mul*=i;
            if (mul>1000000000000)
                break;
            if (vis[mul])
                continue;
            vis[mul] = true;
            power[k++]=mul;
        }
    }
    sort(power,power+k);
    len = k;
}

int main ()
{
    solve();
    ll cases,caseno=0;
    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%lld%lld",&L,&R);
        lwr = lower_bound(power,power+len,L)-power;
        upr = upper_bound(power,power+len,R)-power;
        printf("Case %lld: %lld\n",++caseno,(upr-lwr));
    }
    return 0;
}
