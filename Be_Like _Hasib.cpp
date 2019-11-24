#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
#include <functional> // for less
#include <iostream>
using namespace __gnu_pbds;
using namespace std;

typedef long long ll;

#define pf(n) cout << n << endl
#define ps() cout <<" ";
#define sf(n) cin >> n
#define in(i,n) for (int i = 0; i < n; i++)
#define vi vector<int>
#define vp vector<pair<int, int>>
#define graph vector< vector<int> >
#define vs vector<string>
/**  '' "\n" ^ - = + **/


typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,
                 tree_order_statistics_node_update>
        new_data_set;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n,x;
    cin>>n>>x;
    ll l=1,h=n;
    int count=0;
    ll mid=-1;
    while(l<h)
    {
        mid=(l+h)/2;
        count++;
        //cout<<l<<" "<<h<<" "<<mid<<endl;
        if(x==mid)
        {
            h=mid;
            continue;
        }
        if(x<mid)
            h=mid;
        else l=mid+1;
    }
    //if(count!=1)
    //count++;
    //cout<<"final mid "<<mid<<endl;
    cout<<count<<endl;
}
