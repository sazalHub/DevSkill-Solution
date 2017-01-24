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
map<string,vector<string> >data;
map<string,string>parent;
map<string,ll>vis,changed;

string find_root(string r)
{
    return parent[r]==r ? r:parent[r] = find_root(parent[r]);
}

void Union(string i,string j)
{
    string iroot = find_root(i);
    string jroot = find_root(j);
    parent[iroot] = jroot;
}


int main ()
{
    ///freopen("input.txt","r",stdin);
    ///freopen("output.txt","w",stdout);
    ll N;

    scanf("%lld",&N);
    while(N--)
    {
        string xx,yy,zz;
        cin>>xx;
        if (xx=="create")
        {
            cin>>yy;
            if (vis[yy]==1)
                printf("ERROR\n");
            else
            {
                vis[yy]=1;
                parent[yy] = yy;
                printf("OK\n");
            }
        }
        else if (xx=="change")
        {
            cin>>yy>>zz;
            if (vis[yy]==0 || vis[zz]==1 || changed[yy]==1)
                printf("ERROR\n");
            else
            {
                vis[zz] = 1;
                changed[yy] = 1;
                parent[zz] = zz;
                Union(yy,zz);
                printf("OK\n");
            }
        }
        else
        {
            cin>>yy;
            if (vis[yy]==0)
                printf("ERROR\n");
            else
            {
                string tmp = find_root(yy);
                printf("%s\n",tmp.c_str());
            }
        }
    }
    return 0;
}

