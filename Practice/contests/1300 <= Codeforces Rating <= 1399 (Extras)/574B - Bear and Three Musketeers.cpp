// B. Bear and Three Musketeers.cpp

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;


int tc=1;
const long long int mx=4000;

bool mp[mx+5][mx+5];
int degree[mx+5],a[mx+5],b[mx+5],x,y;

int main()
{
    int i,n,m,ans,j;
    cin>>n>>m;
    for(i=1;i<=m;i++)
    {
        cin>>a[i]>>b[i];
        degree[a[i]]++;
        degree[b[i]]++;
        mp[a[i]][b[i]]=true;
        mp[b[i]][a[i]]=true;
    }
    ans=INT_MAX;
    for(i=1;i<=m;i++)
    {
        x=a[i],y=b[i];
        for(j=1;j<=n;j++)
        {
            if(j==x || j==y) continue;
            if(mp[x][j] && mp[y][j]) ans=min(ans,degree[x]+degree[y]+degree[j]-6);
        }
    }
    if(ans==INT_MAX) cout<<-1<<endl;
    else cout<<ans<<endl;
    return 0;
}