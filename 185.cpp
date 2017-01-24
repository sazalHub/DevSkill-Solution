#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
    ll cases,caseno=0;
    scanf("%lld",&cases);
    while(cases--)
    {
        ll a1,b1,a2,b2;
        scanf("%lld%lld%lld%lld",&a1,&b1,&a2,&b2);
        ll ans1 = abs(a1-a2);
        ll ans2 = abs(b1-b2);
        ll ans3 = abs(b1+a2-a1-b2);
        printf("Case %lld: %lld\n",++caseno,max(ans1,max(ans2,ans3)));
    }
    return 0;
}
