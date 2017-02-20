#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main ()
{
    ll N;
    while(scanf("%lld",&N)==1)
    {
        ll a,b,step=1;
        char ch;
        string xx;
        map<ll,map<char,map<ll,ll> > >track;
        map<string,bool>vis;

        for (ll i=1;i<=N;i++)
        {
            cin>>xx;
            a = xx[0]-48;
            ch = xx[1];
            b = xx[2]-48;

            printf("Instruction %lld: ",i);
            if (ch=='+')
            {
                if (track[a][ch][b]!=0)
                {
                    printf("repeat step %lld\n",track[a][ch][b]);
                    continue;
                }
                if (track[a][ch][b]==0)
                {
                    track[a][ch][b] = track[b][ch][a] = step;
                    step++;
                }
                printf("add %lld to %lld\n",a,b);
            }
            else if (ch=='-')
            {
                if (track[a][ch][b]!=0)
                {
                    printf("repeat step %lld\n",track[a][ch][b]);
                    continue;
                }
                printf("subtract %lld from %lld\n",b,a);
                if (track[a][ch][b]==0)
                {
                    track[a][ch][b] = step;
                    step++;
                }
            }
            else if (ch=='*')
            {
                if (track[a][ch][b]!=0)
                {
                    printf("repeat step %lld\n",track[a][ch][b]);
                    continue;
                }
                if (track[a][ch][b]==0)
                {
                    track[a][ch][b] = track[b][ch][a] = step;
                    step++;
                }
                printf("multiply %lld with %lld\n",a,b);
            }
            else
            {
                if (track[a][ch][b]!=0)
                {
                    printf("repeat step %lld\n",track[a][ch][b]);
                    continue;
                }
                printf("divide %lld by %lld\n",a,b);
                if (track[a][ch][b]==0)
                {
                    track[a][ch][b] = step;
                    step++;
                }
            }
        }
    }
    return 0;
}
