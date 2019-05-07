#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
typedef long long ll;
int main()
{
    int t;
    int I=1;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a>b&&a>c)
        {
            printf("Case %d: A\n",I++);
        }
        else if(b>a&&b>c)
        {
            printf("Case %d: B\n",I++);
        }
        else if(c>a&&c>b)
        {
            printf("Case %d: C\n",I++);
        }
        else
        {
            printf("Case %d: Confused\n",I++);
        }
    }
}
