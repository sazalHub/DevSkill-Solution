#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll GCD(ll a,ll b)
{
    return (a%b)?GCD(b,a%b):b;
}

int main ()
{
    ll cases,a,b,g;
    scanf("%lld",&cases);
    {
        while(cases--)
        {
            scanf("%lld%lld",&a,&b);
            g = GCD(a,b);
            printf("%lld\n",(a*b/g)*2);
        }
    }
    return 0;
}
