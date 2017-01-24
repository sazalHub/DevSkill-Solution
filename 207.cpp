#include<bits/stdc++.h>
#define ll long long
#define li long int
#define ii int
#define cprint(n) printf("Case %lld:",n)
#define iscan(n) scanf("%d",&n)
#define lscan(n) scanf("%ld",&n)
#define llscan(n) scanf("%lld",&n)
#define dscan(n) scanf("%lf",&n)
using namespace std;

int main ()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    long cases,caseno=0;
    char str[50005];
    deque<char>temp,ans;
    scanf("%ld",&cases);
    ///getchar();
    while(cases--)
    {
        scanf("%s",&str);
        ll len = strlen(str);
        temp.clear();
        ans.clear();
        for (ll i=0;i<len;i++)
            temp.push_back(str[i]);
        ans = temp;
        for (ll i=0;i<len;i++)
        {
            char ch = temp[len-1];
            temp.push_front(ch);
            temp.pop_back();
            ///cout<<xx<<" "<<yy<<endl;
            bool fl = true;
            for (ll j=0;j<len;j++)
            {
                if (ans[j]>temp[j])
                {
                    fl = false;
                    break;
                }
                else if (ans[j]<temp[j])
                {
                    fl = true;
                    break;
                }
            }
            if (!fl)
                ans = temp;
        }
        printf("Case %ld: ",++caseno);
        for (ll i=0;i<len;i++)
            printf("%c",ans[i]);
        printf("\n");
    }
    return 0;
}

