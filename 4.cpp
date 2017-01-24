#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
    ll a,b,num,sum;
    while(scanf("%lld%lld",&a,&b)==2)
    {
        sum = 0;
        for (ll i=0;i<b;i++)
        {
            scanf("%lld",&num);
            sum+=num;
        }
        ll ans = a/sum;
        if (a%sum!=0)
            ans++;
        if (ans==1)
            printf("Project will finish within %lld day.\n",ans);
        else
            printf("Project will finish within %lld days.\n",ans);
    }
    return 0;
}
