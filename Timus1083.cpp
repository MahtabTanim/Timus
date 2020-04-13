#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	string s;
	cin>>s;
	long long i,len=s.length();
	if(n%len==0) i=len;
	else i=n%len;
	long long sum=1;
	for(;i<=n;i+=len)
	{
		sum*=i;
	}
	cout<<sum<<endl;
	return 0;
}
