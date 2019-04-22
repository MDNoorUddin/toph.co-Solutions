#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define INF 99999999
int main()
{
    int t;
    cin>>t;
    map<char,int> mp;
    for(int i=65;i<=90;i++)
    {
        char c=i;
        mp[c]=65+i;
        mp[c+32]=65+i;
    }
    while(t--)
    {
        string str;
        cin>>str;
        for(int i=0;i<str.length();)
        {
            cout<<str[i];
            int j=i+1;
            while(j<str.length()&&mp[str[i]]==mp[str[j]])
            {
                cout<<"#";
                i++;
                j++;
            }
            i++;
            //cout<<i<<" ";
        }
        cout<<'\n';
    }
}
