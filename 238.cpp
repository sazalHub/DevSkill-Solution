#include<bits/stdc++.h>
#define ll long long
using namespace std;
bool vis[10000005];
ll len;
vector<ll>primes;
void PrimeGenerator()
{
    primes.push_back(2);
    for (ll i=3;i<=4000;i+=2)
    {
        if (!vis[i])
        {
            primes.push_back(i);
            for (ll j=i*i;j<=4000;j+=2*i)
                vis[j] = true;
        }
    }
    len = primes.size();
    ///cout<<primes[len-1]<<endl;
}

int main ()
{
    PrimeGenerator();
    ll cases,N,sum,div;
    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%lld",&N);
        if (N%2==1||N==0)
        {
            printf("0\n");
            continue;
        }
        sum = 1;
        ll tmp = N;
        for (ll i=0;i<len && primes[i]*primes[i]<=tmp;i++)
        {
            ll cnt = 0;
            while(tmp%primes[i]==0)
            {
                cnt++;
                tmp/=primes[i];
            }
            if (cnt>0)
            {
                ll tsum = 0,t=1;
                ll st = 0;
                if (primes[i]==2)
                    t=2,st=1;
                for (;st<=cnt;st++)
                    tsum+=t,t*=primes[i];
                sum*=tsum;
            }
        }
        if (tmp>1)
        {
            if (tmp==2)
                sum*=2;
            else
                sum*=(1+tmp);
        }
        printf("%lld\n",sum);
    }
    return 0;
}

