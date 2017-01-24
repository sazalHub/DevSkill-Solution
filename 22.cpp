#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll num,base;
string ss = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

void solve(ll n)
{
    if (n==0)
        return;
    ll rem = n%base;
    solve(n/base);
    printf("%c",ss[rem]);
}

int main ()
{
    ll cases;
    char ch;
    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%lld%c%lld",&num,&ch,&base);
        if (num==0)
        {
            printf("0\n");
            continue;
        }
        solve(num);
        printf("\n");
    }
    return 0;
}
