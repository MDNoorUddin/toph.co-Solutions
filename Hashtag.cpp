#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define INF 99999999
int main()
{
    string str;
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if(str[i]!=' ')cout<<str[i];
    }
}
