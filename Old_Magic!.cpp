#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007
typedef long long ll;
int main()
{
    int t;
    int I=1;
    cin>>t;
    vector<pair<string,int> > a;
    string str;
    ll c;
    while(t--)
    {
        cin>>str>>c;
        a.push_back({str,c});
    }
    cin>>c;
    reverse(a.begin(),a.end());
    for(int i=0;i<a.size();i++)
    {
        if(a[i].first=="add")c-=a[i].second;
        else if(a[i].first=="multiply")c/=a[i].second;
        else if(a[i].first=="divide")c*=a[i].second;
        else c+=a[i].second;
    }
    cout<<c<<endl;
}
