#include<bits/stdc++.h>

using namespace std;

typedef long long ll;




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,a,b;
    cin>>n>>a;
    int x;
    set<int> d;
    for(int i=1;i<=n+a;i++)
    {
        cin>>x;
        d.insert(x);
    }
    set<int>::iterator it;
    it=d.begin();
    int i=0;
    while(it!=d.end())
    {
        if(i)cout<<" ";
        cout<<*it;
        it++;
        i++;
    }
}
