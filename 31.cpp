#include<bits/stdc++.h>
#define ll int
using namespace std;
int main ()
{
    ll cases,X,Y,P;
    scanf("%d",&cases);
    while(cases--)
    {
        scanf("%d%d%d",&X,&Y,&P);
        printf("%d.",X/Y);
        ll rem = X%Y;
        while(P--)
        {
            rem*=10;
            printf("%d",rem/Y);
            rem = rem%Y;
        }
        printf("\n");
    }
    return 0;
}
