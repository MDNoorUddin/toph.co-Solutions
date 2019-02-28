#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    while(cin>>str)
    {
        int a=0,b=0,c=0,count=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]>='a'&&str[i]<='z')a++;
            if(str[i]>='A'&&str[i]<='Z')b++;
            if(str[i]>='0'&&str[i]<='9')c++;
            if(a&&b&&c)
            {
                a=0;b=0;c=0;
                count++;
            }
        }
        cout<<count<<endl;
    }

}
