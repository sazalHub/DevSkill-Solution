#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main ()
{
    ll P,a,b,c,d,points,MX;
    while(scanf("%lld",&P)==1)
    {
        MX = -99999999999999999;
        for (ll i=1;i<=P;i++)
        {
            scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
            points = a + b*3 + c*10 + d*(-5);
            printf("Player %lld: %lld\n",i,points<0?0:points);
            MX = max(MX,points);
        }
        printf("High Score = %lld\n",MX);
    }
    return 0;
}
