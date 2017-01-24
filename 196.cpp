#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main ()
{
    ll cases;
    cin>>cases;
    while(cases--)
    {
        double V,T;
        cin>>V>>T;
        double ans = (0-V)/T;
        printf("%.2lf\n",ans);
    }
    return 0;
}
