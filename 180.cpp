#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main ()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    ll cases,caseno=0;
    string xx;
    scanf("%lld",&cases);
    ///getchar();
    while(cases--)
    {
        ///scanf("%s",&str);
        cin>>xx;
        ll len = xx.size();
        ll num = (xx[len-1]-48) +  (xx[len-2]-48)*10 + (xx[len-3]-48)*100;
        if (num%8==0)
        {
            ll tmp = 0;
            if (xx[0]=='A')
                tmp = 1;
            printf("YES\n%lld\n",tmp);
        }
        else
            printf("NO\n");
    }
    return 0;
}

