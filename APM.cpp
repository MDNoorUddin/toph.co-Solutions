#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> mp;/// aca ki na///
    map<int,string > np;///index///
    map<string,int>::iterator jt;
    map<string,pair<string,string> >  dp;
    vector<vector<int> > g(200);
    int counter=1;
    int t;
    cin>>t;
    int I=1;

    while(t--)
    {

        string str;
        //cout<<"string ";
        cin>>str;
        string pac,id;
        string F=str;
        bool x=false;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]==':')
            {
                x=true;
            }
            else
            {
                if(x)id=id+str[i];
                else pac=pac+str[i];
            }
        }
        int n;
        //cout<<"number ";
        cin>>n;
        x=false;
        //cout<<n<<endl;
        vector<pair<string,string> > ans;
        vector<string> c;
        while(n--)
        {
            //cout<<"string1 ";
            cin>>str;
            //cout<<str<<endl;
            string a,b;
            bool k=false;
            jt=mp.find(str);
            if(jt==mp.end())
            {
                x=true;
            }
            for(int i=0;i<str.length();i++)
            {
                if(str[i]==':')
                    k=true;
                else
                {
                    if(k)b=b+str[i];
                    else a=a+str[i];
                }
            }
            ans.push_back({a,b});
            c.push_back(str);

        }
        if(x)
        {
            //cout<<"Error\n";
            cout<<"Request "<<I++<<": ERROR\n";
            continue;
        }
        else
        {
            //cout<<str<<endl;
            //cout<<"------------\n";
            map<string,set<string> > db;
            db[pac].insert(id);
            for(int j=0;j<ans.size();j++){
            queue<int> q;
            q.push(mp[c[j]]);
            vector<bool> vi(200);
            fill(vi.begin(),vi.end(),false);
            vi[mp[c[j]]]=true;


            string X,Y;
            X=dp[c[j]].first;
            Y=dp[c[j]].second;
            db[X].insert(Y);

            while(!q.empty())
            {
                int tp=q.front();
                q.pop();
                for(int i=0;i<g[tp].size();i++)
                {
                    //cout<<"here\n";
                    if(!vi[g[tp][i]])
                    {
                        string pre=np[g[tp][i]];
                        //cout<<pre<<"->";
                        string X,Y;
                        X=dp[pre].first;
                        Y=dp[pre].second;
                        vi[g[tp][i]]=true;
                        q.push(g[tp][i]);
                        db[X].insert(Y);
                    }
                }
            }
            }
            //cout<<endl;
            map<string,set<string> >::iterator it;
            it=db.begin();
            x=false;
            while(it!=db.end())
            {
                //cout<<it->first<<" "<<it->second.size()<<endl;
                if(it->second.size()>1)
                {
                    x=true;
                    break;
                }
                it++;
            }
            if(x)
            {
                cout<<"Request "<<I++<<": ERROR\n";
                continue;

            }
            mp[F]=counter;
            np[counter]=F;
            dp[F]={pac,id};

            for(int j=0;j<c.size();j++)
            {
                g[counter].push_back(mp[c[j]]);
                g[mp[c[j]]].push_back(counter);
            }
            counter++;
            jt=mp.begin();
            cout<<"Request "<<I++<<": OK\n";
            while(jt!=mp.end())
            {
                cout<<jt->first<<endl;
                jt++;
            }
            //cout<<"done\n";

        }
    }
}
