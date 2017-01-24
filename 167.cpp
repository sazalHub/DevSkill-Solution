#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
    ll cases,caseno=0,n;
    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%lld",&n);
        printf("Case %lld: %lld\n",++caseno,(ll)((n*n*(n+1)*(n+1))/4));
    }
    return 0;
}
