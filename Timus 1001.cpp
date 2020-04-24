// Written By Mahtab Tanim
#include<bits/stdc++.h>
using namespace std;
#define MP ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define nl "\n"
//#define End return 0
#define ll long long int
#define mp make_pair
#define pb push_back
#define ull unsigned long long int
#define pi acos(-1)
#define forn(i,a,b) for (int i=a;i<=b;i++)
long long value(string s)
{
    long long sum=0,len=s.length()-1;
    for(int i=0;i<=len;i++)
    {
        sum=sum*10+ (s[i]-'0');
    }
    return sum;
}
int main()
{
    vector<string> ss;
    string s,s1;
    cout<<s1<<endl;

    while(getline(cin,s))
    {
        s1="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>=48 && s[i]<=57)
            {
                s1.push_back(s[i]);
            }
            else{
                if(s1!="") ss.push_back(s1);
                s1="";
            }
        }
        if(s1!="") ss.push_back(s1);
    }
    for(int i=ss.size()-1;i>=0;i--)
    {
         long long int d=value(ss[i]);
        //cout<<setprecision(16)<<sqrt(d)<<endl;
        printf("%.5lf\n",sqrt(d));
    }

return 0;
}
