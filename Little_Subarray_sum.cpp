#include<bits/stdc++.h>

using namespace std;

typedef long long ll;




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,a,b;
    cin>>n>>a>>b;
    vector<int> aa(n);
    vector<int> pre(n);
    pre[0]=0;
    for(int i=0;i<n;i++)
    {
        cin>>aa[i];
        if(i==0)pre[i]=aa[i];
        else
        {
            pre[i]=pre[i-1]+aa[i];
        }
    }
    int sum1=pre[a]-aa[a];
    cout<<pre[b]-sum1<<endl;
}
