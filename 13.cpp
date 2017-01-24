#include<bits/stdc++.h>
#define ll int
using namespace std;
int main ()
{
    ll cases,a,b,c,d;
    scanf("%d",&cases);
    while(cases--)
    {
        ll ban = 0;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        ban+=(a+b>c+d)?1:0;
        scanf("%d%d%d%d",&a,&b,&c,&d);
        ban+=(a+b>c+d)?1:0;
        if (ban==2)
            printf("Banglawash\n");
        else
            printf("Miss\n");
    }
    return 0;
}
