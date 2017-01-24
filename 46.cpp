#include<bits/stdc++.h>
#define ll long long unsigned
using namespace std;

int main ()
{
    long long cases;
    ll A,B;
    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%llu%llu",&A,&B);
        ll ans = min(A,B);
        ans = ans + (max(A,B)-ans)/2;
        printf("%llu\n",ans);
    }
    return 0;
}
