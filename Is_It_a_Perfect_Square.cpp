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
    int t;
    cin>>t;
    in(I,t){
    int a;
    cin>>a;
    int n;
    unordered_map<int,int> mp;
    while(a--)
    {
        cin>>n;
        for(int i=2;i<=n;i++)
        {
            int count=0;
            while(n%i==0)
            {
                //cout<<i<<" ";
                n/=i;
                mp[i]++;
            }
        }
        if(n>1)
            mp[n]++;
    }
    bool x=true;
    unordered_map<int,int>::iterator it;
    it=mp.begin();
    while(it!=mp.end())
    {
        if(it->second%2!=0)
        {
            x=false;
            break;
        }
        it++;
    }
    if(x)
        cout<<"YES\n";
    else cout<<"NO\n";
    }
}
