#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main ()
{
    ll cases,N,sum,n,num,ans,ans1;
    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%lld",&N);
        ans = -999999999999;

        ///cout<<ans<<endl;

        for (ll i=0;i<N;i++)
        {
            scanf("%lld",&num);
            ans = max(ans,num);
        }

        printf("%lld\n",ans);
    }
    return 0;
}

