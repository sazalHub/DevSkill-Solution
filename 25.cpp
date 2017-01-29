#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
    char xx[105];
    ll cases;
    scanf("%lld",&cases);
    while(cases--)
    {
        scanf("%s",&xx);
        ll len = strlen(xx);
        for (ll i=0;i<len;i++)
            if (isupper(xx[i]))
                xx[i] = tolower(xx[i]);
        ll st=0,nd=len-1;
        bool flag = true;
        while(st<nd)
        {
            if (xx[st]!=xx[nd])
            {
                flag = false;
                break;
            }
            st++,nd--;
        }
        if (flag)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}

