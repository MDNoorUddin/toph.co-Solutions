#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define INF 99999999
int main()
{
    int t;
    cin>>t;
    int I=1;
    while(t--)
    {
        //cout<<t<<endl;
        int p,k,d;
        cin>>p>>k>>d;
        k=p+k;
        int g=p;
        while(g<=k)
        {
            g+=d;
        }
        printf("Case %d: %d\n",I++,g);
    }
}
