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

int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		long long  k;
		cin>>k;
		k--;
		long double p=8*k+1;
		long double x=sqrt(p);
		long long y=sqrt(p);
		if(x==y) cout<<1<<" ";
		else cout<<0<<" ";
	}	
End;
}

