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
const int MOD = 1e9+7;
const double EPS=1e-9;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int c=max(x,y);
        ll ans=0;
        if(c%2==0){
            ans=1LL*c*c-1LL*(abs(1-y)+abs(c-x) );
        }
        else{
            ans=1LL*c*c-1LL*(abs(1-x)+abs(c-y));
        }
        //cout<<c<<" "<<1LL*c*c<<endl;
        cout<<ans<<endl;
    }
    return 0;
}