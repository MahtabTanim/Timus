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
#define forn(i,a,b) for (int i=a;i<=b;i++)

int main()
{
    int n;
    double a,b,r,c,d;
    cin>>n>>r;
    vector< pair<double,double> > q;
    for(int i=0; i<n; i++)
    {
        cin>>a>>b;
        q.pb(mp(a,b));
    }
    double len=0;
    double l;
    for(int i=1; i<n; i++)
    {
        c=q[i].first-q[i-1].first;
        d=q[i].second-q[i-1].second;

        l=c*c + d*d;
        l=sqrt(l);
        len+=l;
    }
    c=q[n-1].first-q[0].first;
    d=q[n-1].second-q[0].second;
    l=c*c + d*d;
    l=sqrt(l);
    len+=l;
    l=(2*3.1415*r);
    len+=l;
    printf("%.2lf",len);
    return 0;
}
