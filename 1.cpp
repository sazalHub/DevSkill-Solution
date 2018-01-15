#include<bits/stdc++.h>
#define ll long long
using namespace std;

string findSum(string str1, string str2)
{
	if (str1==""&&str2=="") return "";

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

int main ()
{
	///freopen("in.txt","r",stdin);
	///freopen("out.txt","w",stdout);
	string input,num1,num2,ans;
	while(cin>>input){

		num1 = num2 = "";
		ll i = input.size()-1;

		while(input[i]!=',') num2+=input[i--];
		i--;
		while(i>=0) num1+=input[i--];

		ans = findSum(num1,num2);
		reverse(ans.begin(),ans.end());
		i = 0;
		while(ans[i]&&ans[i]=='0') i++;

		while(ans[i]){
			printf("%c",ans[i]);
			i++;
		}
		printf("\n");
	}
	return 0;
}



