// Written By Mahtab Tanim
#include<bits/stdc++.h>
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl "\n"
#define End return 0
#define ll long long int
#define mp make_pair
#define pb push_back
#define ull unsigned long long int
#define pi acos(-1)
#define si 1000000
bool value[si];
void sieve(void)
{
	int size=1000000;
	int sq=sqrt(1000000);
	for(int i=4;i<=size;i+=2) value[i]=1;
	for(int i=3;i<sq;i+=2)
	{
		if(value[i]==0)
		{
			for(int j=2*i;j<=size;j+=i) value[j]=1;
		}
	}
	value[1]=1;
}
int main()
{
	sieve();
	int t;
	cin>>t;
	while(t--)
	{
		int n,i=3;
		cin>>n;
		int count=1;
		if(n==1) cout<<2<<nl;
		else{
		while(count!=n)
		{
			if(value[i]==0) count++;
			i=i+2;
		}
		cout<<i-2<<nl;
	}
	}

End;
}
