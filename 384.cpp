#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct data{
    char ch;
    ll cnt;
    data(){}
    data(char c,ll cn)
    {
        ch = c,cnt = cn;
    }
};
vector<data>vc;
ll csum[1000005][3];

int main ()
{
    ll cases,caseno=0,ans,cnt,pos,len,tpos,sum,tmp,tp;
    string xx;
    scanf("%lld",&cases);
    while(cases--)
    {
        cin>>xx;

        vc.clear();
        vc.push_back(data('a',0));

        for (ll i=0;xx[i];)
        {
            if (xx[i]=='a')
            {
                cnt = 0;
                while(xx[i]&&xx[i]=='a')
                    cnt++,i++;
                vc.push_back(data('a',cnt));
            }
            else
            {
                cnt = 0;
                while(xx[i]&&xx[i]=='b')
                    cnt++,i++;
                vc.push_back(data('b',cnt));
            }
        }
        vc.push_back(data('b',0));

        len = vc.size();
        csum[0][0] = csum[0][1] = 0;

        for (ll i=1;i<len;i++)
        {
            csum[i][0] = csum[i-1][0];
            csum[i][1] = csum[i-1][1];
            if (vc[i].ch=='a')
                csum[i][0]+=vc[i].cnt;
            else
                csum[i][1]+=vc[i].cnt;
        }

        pos = ans = tpos = cnt = sum = 0;

        for (ll i=1;i<len;i++)
        {
            if (vc[i].ch=='b')
            {
                cnt++;
                if (cnt>=2)
                {
                    tmp = csum[i-1][0]+csum[i-1][1]-csum[pos][0]-csum[pos][1];
                    tp = 0;
                    if (pos>0)
                    {
                        ///cout<<tpos<<" "<<pos<<endl;
                        tp = csum[tpos-1][0]+csum[tpos-1][1]-csum[pos][0]-csum[pos][1];
                    }
                    tp = (tp*(tp+1))/2;
                    ans+=((tmp*(tmp+1))/2) - tp;
                    sum++;
                    pos = tpos;
                }
                tpos = i;
            }
        }

        if (sum==0)
        {
            ll tmp = csum[len-1][0]+csum[len-1][1]-csum[pos][0]-csum[pos][1];
            ans+=((tmp*(tmp+1))/2);
        }

        printf("Case %lld: %lld\n",++caseno,ans);
    }
    return 0;
}

