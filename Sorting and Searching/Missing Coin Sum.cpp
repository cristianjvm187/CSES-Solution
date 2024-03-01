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
    int n;
    cin>>n;
    vi arr(n);
    fore(n){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll ans=0;
    bool v=true;
    fore(n){
        if(ans+1<arr[i]){
            cout<<ans+1<<endl;
            v=false;
            break;
        }
        else ans+=1ll*arr[i];
    }
    if( v)cout<<ans+1<<endl;
    return 0;
}