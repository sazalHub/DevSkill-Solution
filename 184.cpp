#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
    ll arr[45];
    arr[1] = 1;
    arr[2] = 3;
    for (ll i=3;i<=44;i++)
        arr[i] = arr[i-1] + arr[i-2];
    ll cases;
    scanf("%lld",&cases);
    while(cases--)
    {
        ll num;
        scanf("%lld",&num);
        printf("%lld\n",arr[num]);
    }
    return 0;
}
