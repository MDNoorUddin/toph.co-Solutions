#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;
ll modPow(ll a,ll b,ll m )
{
    if(b==0)return 1%m;
    ll u=modPow(a,b/2,m);
    u=(u*u)%m;
    if(b%2!=0)u=(u*a)%m;
    return u;
}
int main()
{
    int t;
    cin>>t;
    int n,m,I=1;
    while(t--)
    {
        ll a,b,m;
        cin>>a;
        cout<<"Case "<<I++<<": "<<a*a<<'\n';
    }

}
