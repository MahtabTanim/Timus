#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n>=0)
    {
        if (n==0) cout<<1<<endl;
        else{
        int sum=n*(n+1);
        sum/=2;
        cout<<sum<<endl;}
    }
    else{
        n=fabs(n);
        int sum= n*(n+1);
        sum/=2;
        sum=0-sum;
        sum+=1;
        cout<<sum<<endl;
    }
}
