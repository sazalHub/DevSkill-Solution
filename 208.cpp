#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>primes;
bool vis[10005000];
void PrimeGenerator()
{
    memset(vis,true,sizeof(vis));
    primes.push_back(2);
    for (ll i=3;i<=10005000;i+=2)
    {
        if (vis[i])
        {
            primes.push_back(i);
            for (ll j=i*i;j<=10005000;j+=2*i)
                vis[j] = false;
        }
    }
}

bool solve(ll n)
{
    vector<ll>pfactors;
    ll st;
    for (ll i=0;primes[i]*primes[i]<=n;i++)
    {
        ll cnt = 0;
        while(n%primes[i]==0)
        {
            n/=primes[i];
            cnt++;
        }
        ///cout<<n<<endl;
        if (cnt>0)
        {
            if (pfactors.size()==0)
                st = i;
            pfactors.push_back(primes[i]);
        }
    }
    if (n>1)
    {
        if (pfactors.size()==0)
            return true;
        pfactors.push_back(n);
    }
    ///cout<<st<<endl;
    ll len = pfactors.size();
    ///cout<<len<<endl;
    for (ll i=0;i<len;i++)
    {
        ///cout<<primes[st+i]<<" "<<pfactors[i]<<endl;
        if (primes[st+i]!=pfactors[i])
            return false;
    }
    return true;
}

int main ()
{
    PrimeGenerator();
    ll cases,N;
    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%lld",&N);
        if (N<=1)
            printf("No\n");
        else if (solve(N))
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
