#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define INF 99999999
int main()
{
    string str;
    while(cin>>str)
    {
        int count=0;
        for(int i=0;i<str.length();i++)
        {
            count+=(str[i]-48);
        }
        cout<<count<<endl;
    }
}
