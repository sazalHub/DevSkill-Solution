#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll arr[1000005];
int main ()
{
    arr[1] = 0,arr[2] = 2;
    ll d = 6;
    for (ll i=3;i<=1000001;i++)
    {
        arr[i] = arr[i-1]+d;
        d+=4;
        ///cout<<arr[i]<<endl;
    }
    ll cases,N,ans;
    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%lld",&N);
        printf("%lld\n",arr[N]);
    }
    return 0;
}

