#include<bits/stdc++.h>

using namespace std;

typedef long long ll;




int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n,a,b;
    cin>>n;
    string str;
    cin.ignore();
    getline(cin,str);
    for(int i=0;i<str.length();i++)
    {
        if(str[i]==' ')cout<<" ";
        else
        {
            int h=((str[i]-97)-n);
            if(h<0)h=26+h;
            str[i]=h+97;
            cout<<str[i];
        }
    }
}
