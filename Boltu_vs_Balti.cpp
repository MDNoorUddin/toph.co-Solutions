#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long ll;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,m;
    while(cin>>n>>m)
    {
        if(m<n)
            swap(n,m);
        ll nn=(n*(n+1))/2;
        ll mm=(m*(m+1))/2;
        cout<<"Sum of "<<n<<" to "<<m<<" is -> "<<mm-nn+n<<";"<<endl;
    }
}
