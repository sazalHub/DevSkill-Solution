#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
    ///freopen("in.txt","r",stdin);
    ll cases,N,ans;
    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%lld",&N);
        if (N%2==0)
            ans = 1;
        else
            ans = 9;
        printf("%lld\n",ans);
    }
    return 0;
}

