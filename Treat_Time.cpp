#include<bits/stdc++.h>

using namespace std;

typedef long long ll;
#define INF 99999999
int main()
{
    int b,i,c;
    cin>>b>>c>>i;
    if(b<i&&b<c)
    {
        cout<<"Chocolate\n";
    }
    else if(b>=i&&b>=c)
    {
        cout<<"Chocolate\n";
    }
    else
    {
        if(c<=b)
        cout<<"Chocolate\n";
        else
        cout<<"Ice-cream\n";

    }
}
