#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll retAns(ll N)
{
    ll div = N/15;
    ll rem = N%15;
    switch(rem)
    {
        case 0:
            return 0;
        case 1:
        case 2:
        case 8:
        {
            if (div%2==0 && (div/2)%2==0)
                return 1;
            if (div%2==0 && (div/2)%2==1)
                return 9;
            if (div%2==1 && (div/2)%2==0)
                return 7;
            if (div%2==1 && (div/2)%2==1)
                return 3;
        }
        case 4:
        case 7:
        case 13:
        {
            if (div%2==0 && (div/2)%2==0)
                return 3;
            if (div%2==0 && (div/2)%2==1)
                return 7;
            if (div%2==1 && (div/2)%2==0)
                return 1;
            if (div%2==1 && (div/2)%2==1)
                return 9;
        }
        case 5:
        case 10:
            return 5;
        case 9:
        case 12:
        {
            if (div%2==0 && (div/2)%2==0)
                return 4;
            if (div%2==0 && (div/2)%2==1)
                return 6;
            if (div%2==1 && (div/2)%2==0)
                return 8;
            if (div%2==1 && (div/2)%2==1)
                return 2;
        }
        case 3:
        {
            if (div%2==0 && (div/2)%2==0)
                return 2;
            if (div%2==0 && (div/2)%2==1)
                return 8;
            if (div%2==1 && (div/2)%2==0)
                return 4;
            if (div%2==1 && (div/2)%2==1)
                return 6;
        }
        case 6:
        {
            if (div%2==0 && (div/2)%2==0)
                return 8;
            if (div%2==0 && (div/2)%2==1)
                return 2;
            if (div%2==1 && (div/2)%2==0)
                return 6;
            if (div%2==1 && (div/2)%2==1)
                return 4;
        }
        case 11:
        {
            if (div%2==0 && (div/2)%2==0)
                return 9;
            if (div%2==0 && (div/2)%2==1)
                return 1;
            if (div%2==1 && (div/2)%2==0)
                return 3;
            if (div%2==1 && (div/2)%2==1)
                return 7;
        }
        case 14:
        {
            if (div%2==0 && (div/2)%2==0)
                return 7;
            if (div%2==0 && (div/2)%2==1)
                return 3;
            if (div%2==1 && (div/2)%2==0)
                return 9;
            if (div%2==1 && (div/2)%2==1)
                return 1;
        }
    }
}
int main ()
{
    ll cases,caseno=0;
    scanf("%lld",&cases);
    while(cases--)
    {
        ll N;
        scanf("%lld",&N);
        printf("Case %lld: %lld is the last digit.\n",++caseno,retAns(N));
    }
    return 0;
}
