#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main ()
{
	ll cases,N;
	scanf("%lld",&cases);
	while(cases--){
		scanf("%lld",&N);
		if (N%3) printf("First\n");
		else printf("Second\n");
	}
	return 0;
}

