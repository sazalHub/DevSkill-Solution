#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll>primes,trt_number;
bool visited[600];

void primeGenerator(){
	primes.push_back(2);
	for (ll i=3;i<=450;i+=2){
		if (!visited[i]){
			primes.push_back(i);
			for (ll j=i*i;j<=450;j+=2*i)
				visited[j] = true;
		}
	}
	///cout<<primes[primes.size()-1]<<endl;
}

bool YES(ll n){
	ll cnt = 0;
	for (ll i=0;primes[i]*primes[i]<=n;i++){
		///if (n==100000) cout<<primes[i]<<endl;
		if (!(n%primes[i])){
			cnt++;
			if (cnt==3) return true;
			while(!(n%primes[i]))
				n/=primes[i];
		}
	}

	if (n>1) cnt++;

	if (cnt>=3) return true;
	return false;
}

void trt_numbers(){

	for (ll i=30;i<=171500;i++){
		///cout<<i<<endl;
		if (YES(i)){
			trt_number.push_back(i);
		}
	}

}

int main ()
{
	primeGenerator();
	trt_numbers();
	///cout<<trt_number.size()<<endl;

	ll cases,N;
	scanf("%lld",&cases);
	while(cases--){
		scanf("%lld",&N);
		printf("%lld\n",trt_number[N-1]);
	}
	return 0;
}

