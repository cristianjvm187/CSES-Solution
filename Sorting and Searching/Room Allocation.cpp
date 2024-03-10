#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
 
#define pb push_back
#define all(a) a.begin(),a.end()
#define fore(n) for(int i=1;i<n;i++)
#define f first
#define s second
 
const int INF = 1e9;
 
int main()
{
    int n; 
    cin>>n;
    set<int> rooms;
    vi dis(n+1,-1);
    fore(200001) rooms.insert(i);
    int ans=1,aux;
    vii arr;
    vi res(n+1);
    fore(n+1)
    {
        int x, y;
        cin>>x>>y;
        arr.push_back({x,-i});
        arr.push_back({y,i});
    }
    sort(arr.begin(),arr.end());
    for(auto it : arr){
        int ind=(it.s<0)?-it.s:it.s;
        if(dis[ind]==-1){
            dis[ind]=*rooms.begin();
            rooms.erase(dis[ind]);
            res[ind]=dis[ind];
            if( ans<dis[ind]) ans=res[ind];
        }
        else{
            rooms.insert(dis[ind]);
            dis[ind]=-1;
        }
    }
    cout<<ans<<endl;
    fore(n+1){
        cout<<res[i]<<" ";
    }
    return 0;
}