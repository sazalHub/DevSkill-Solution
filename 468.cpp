#include<bits/stdc++.h>
#define ll long long
using namespace std;

ll arr[100005],point[100010],offers[100010],ans[100010];
ll N,M,Q;

struct node{
	ll sum,idx;
}tree[500010];

void build(ll node,ll l,ll r){
	if (l==r){
		tree[node].sum = point[l];
		tree[node].idx = l;
		return;
	}

	ll mid = (l+r)/2;
	ll lft = node*2;
	ll rgt = lft+1;
	build(lft,l,mid);
	build(rgt,mid+1,r);
	tree[node].sum = 0;
}

void update(ll node,ll f,ll la,ll l,ll r,ll vl){
	if (r<f || la<l)
        return;

    if (l<=f && la<=r)
    {
        tree[node].sum+=vl;
        return;
    }

    ll lft = node*2;
    ll rgt = lft+1;
    ll mid = (f+la)/2;
    update(lft,f,mid,l,r,vl);
	update(rgt,mid+1,la,l,r,vl);
}

void query(ll node,ll f,ll la,ll carry)
{
    if (f==la){
		ans[tree[node].idx] = tree[node].sum + carry;
		return;
    }
    ll lft = node*2;
    ll rgt = lft+1;
    ll mid = (f+la)/2;
    query(lft,f,mid,carry+tree[node].sum);
    query(rgt,mid+1,la,carry+tree[node].sum);
}


int main ()
{
	///freopen("in.txt","r",stdin);
	ll cases,caseno=0,X,Y,L,R;
	scanf("%lld",&cases);
	while(cases--){

		scanf("%lld%lld%lld",&N,&M,&Q);
		for (ll i=1;i<=N;i++) scanf("%lld",&point[i]);

		offers[0] = 0;
		for (ll i=1;i<=M;i++){
			scanf("%lld",&offers[i]);
			offers[i]+=offers[i-1];
		}

		build(1,1,N);

		for (ll i=0;i<Q;i++){
			scanf("%lld%lld%lld%lld",&X,&Y,&L,&R);
			update(1,1,N,L,R,offers[Y]-offers[X-1]);
		}

		query(1,1,N,0);

		printf("Case %lld:\n",++caseno);
		for (ll i=1;i<=N;i++){
			printf("%lld",ans[i]);
			if (i<N) printf(" ");
		}
		printf("\n");

	}
	return 0;
}

