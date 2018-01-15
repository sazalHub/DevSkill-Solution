#include<bits/stdc++.h>
#define ll long long
using namespace std;

string multiply(string num1, string num2)
{
    int n1 = num1.size();
    int n2 = num2.size();
    if (n1 == 0 || n2 == 0)
       return "0";

    vector<int> result(n1 + n2, 0);

    int i_n1 = 0;
    int i_n2 = 0;

    for (int i=n1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';

        i_n2 = 0;

        for (int j=n2-1; j>=0; j--)
        {
            int n2 = num2[j] - '0';

            int sum = n1*n2 + result[i_n1 + i_n2] + carry;

            carry = sum/10;

            result[i_n1 + i_n2] = sum % 10;

            i_n2++;
        }

        if (carry > 0)
            result[i_n1 + i_n2] += carry;
        i_n1++;
    }

    int i = result.size() - 1;
    while (i>=0 && result[i] == 0)
       i--;
    if (i == -1)
       return "0";

    string s = "";
    while (i >= 0)
        s += (result[i--]+'0');

    return s;
}

string findSum(string str1, string str2)
{
    if (str1.length() > str2.length())
        swap(str1, str2);

    string str = "";

    int n1 = str1.length(), n2 = str2.length();

    reverse(str1.begin(), str1.end());
    reverse(str2.begin(), str2.end());

    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        int sum = ((str1[i]-'0')+(str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');

        carry = sum/10;
    }

    for (int i=n1; i<n2; i++)
    {
        int sum = ((str2[i]-'0')+carry);
        str.push_back(sum%10 + '0');
        carry = sum/10;
    }

    if (carry)
        str.push_back(carry+'0');

    reverse(str.begin(), str.end());

    return str;
}

struct info{
	string x;
	bool flag;
}sett[105];

bool check(string x,string y){
	if (x==y) return true;
	ll lx = x.size()-1,ly = y.size()-1;
	while(lx>=0&&ly>=0){
		if (x[lx]==y[ly]) lx--,ly--;
		else {
			break;
		}
	}
	if (lx==-1&&ly>=0) return true;
	return false;
}

bool cmp(info a,info b){
	return a.x.size()<b.x.size();
}

int main ()
{
	ll cases,L,S,len;

	scanf("%lld",&cases);
	while(cases--){
		scanf("%lld%lld",&L,&S);

		string a,ans = "0";

		for (ll i=0;i<S;i++){
			cin>>sett[i].x;
			sett[i].flag = false;
		}

		sort(sett,sett+S,cmp);

		for (ll i=0;i<S;i++){
			if (sett[i].flag||sett[i].x.size()>L) continue;
			///cout<<i<<" "<<sett[i].x<<endl;
			sett[i].flag = true;
			for (ll j=i+1;j<S;j++){
				if (!sett[j].flag&&check(sett[i].x,sett[j].x)){
					sett[j].flag  = true;
					///cout<<2<<endl;
				}
			}

			if (sett[i].x.size()==L) ans = findSum(ans,"1");
			else if (sett[i].x.size()<L){
				ll dif = L - sett[i].x.size();
				string b = "1";
				for (ll l=0;l<dif;l++) b = multiply(b,"26");
				ans = findSum(ans,b);
			}
		}

		cout<<ans<<endl;
	}
	return 0;
}


