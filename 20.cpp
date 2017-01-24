#include<bits/stdc++.h>
#define ll long long
#define dub double
using namespace std;
int main ()
{
    ll cases,caseno=0;
    scanf("%lld",&cases);
    while(cases--)
    {
        ll cx,cy,px,py;
        dub R;
        scanf("%lld%lld%lf%lld%lld",&cx,&cy,&R,&px,&py);
        dub len = sqrt((cx-px)*(cx-px)+(cy-py)*(cy-py));
        printf("Case %lld: ",++caseno);
        if (R==len)
            printf("OnCircle\n");
        else if (R<len)
            printf("Outside\n");
        else
            printf("Inside\n");
    }
    return 0;
}
