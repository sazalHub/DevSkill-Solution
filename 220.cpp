#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main ()
{
    ll cases,caseno = 0,N,arr[100005];
    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%lld",&N);
        for (ll i=0;i<N;i++)
            scanf("%lld",&arr[i]);
        ll ans = 0;
        if (N==1)
            ans = arr[0];
        printf("Case %lld: %lld\n",++caseno,ans);
    }
    return 0;
}
