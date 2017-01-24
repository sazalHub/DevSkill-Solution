#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct pos {
    ll x,y;
};

int main ()
{
    ll cases,caseno=0,N,M;
    char ch;
    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%lld%lld",&N,&M);
        getchar();
        vector<pos>arr;
        pos p;

        for (ll i=1;i<=N;i++)
        {
            for (ll j=1;j<=M;j++)
            {
                scanf("%c",&ch);
                if (ch=='$')
                {
                    ///cout<<i<<" "<<j<<endl;
                    p.x = i;
                    p.y = j;
                    arr.push_back(p);
                }
            }
            getchar();
        }
        printf("Case %lld:\n",++caseno);
        if (arr.size()==0)
            printf("No Gold Found\n");
        else
        {
            ll len = arr.size();
            for (ll i=0;i<len;i++)
            {
                p = arr[i];
                printf("%lld,%lld\n",p.x,p.y);
            }
        }
    }
    return 0;
}
