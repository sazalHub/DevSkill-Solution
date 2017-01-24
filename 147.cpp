#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
    ll N;
    while(scanf("%lld",&N)==1)
    {
        N-=1;
        ll n = (N/3);
        ll sum1 = (n*(6+(n-1)*3))/2;
        n = (N/5);
        ll sum2 = (n*(10+(n-1)*5))/2;
        n = (N/15);
        ll sum3 = (n*(30+(n-1)*15))/2;
        printf("%lld\n",sum1+sum2-sum3);
    }
    return 0;
}
