#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
    ll cases,caseno=0,X,Y;
    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%lld%lld",&X,&Y);
        printf("Case %lld: %lld\n",++caseno,2*X+3*Y);
    }
    return 0;
}
