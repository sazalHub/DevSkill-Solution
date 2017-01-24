#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool isprime(ll num)
{
    if (num==2||num==3) return true;
    if (num%2==0) return false;
    ll lmt = sqrt(num);
    for (ll i=3;i<=lmt;i+=2)
        if (num%i==0)
            return false;
    return true;
}

int main ()
{
    ll cases,N;
    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%lld",&N);
        bool flag = isprime(N);
        if (flag)
            printf("1\n");
        else
        {
            if (N%2==0)
                printf("2\n");
            else
            {
                if (isprime(N-2))
                    printf("2\n");
                else
                    printf("3\n");
            }
        }
    }
    return 0;
}
