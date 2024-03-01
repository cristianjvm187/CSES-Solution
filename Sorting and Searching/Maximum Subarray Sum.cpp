#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<ii> vii;
 
#define pb push_back
#define all(a) a.begin(),a.end()
#define fore(n) for(int i=0;i<n;i++)
#define f first
#define s second
 
const int INF = 1e9;
 
 
int main()
{
    int n,x;
    cin>>n;
    vector<ll> pref(n+1);
    fore(n)
    {
        cin>>x;
        pref[i+1]=1LL*(pref[i]+x);
    }
    ll ans=pref[1];
    ll min_sum=pref[0];
    for(int i=1;i<=n; i++)
    {
        ans=max(ans,pref[i]-min_sum );
        min_sum=min(min_sum, pref[i]);
    }
    cout<<ans<<endl;
    return 0;
}