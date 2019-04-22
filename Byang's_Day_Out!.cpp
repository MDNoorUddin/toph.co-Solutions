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
        vector<int> a(3);
        cin>>a[0]>>a[1]>>a[2];
        sort(a.begin(),a.end());
        if(a[0]+a[1]>=a[2])cout<<"Yes\n";
        else cout<<"No\n";
    }
}
