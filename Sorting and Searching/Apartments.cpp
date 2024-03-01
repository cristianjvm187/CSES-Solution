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
    int n, m, k,ai;
    cin>>n>>m>>k;
    vii arr; vi a(n), b(m);
    fore(n){
        cin>>ai;
        arr.push_back( {ai-k,0});
        arr.push_back({ai+k,2});
    }
    fore(m){
        cin>>ai;
        arr.push_back({ai,1});
    }
    sort(arr.begin(),arr.end());
    int o=0,c=0 ,ans=0, v=0;
    for(int i=0; i<arr.size(); i++){
        if( arr[i].s==0) o++;
        else if(arr[i].s==1){
            if(o>0){
                ans++;
                v++;
                o--;
            }
        }
        else{
            if(v>0) v--;
            else o--;
        }
    }
    cout<<ans<<endl;
    return 0;
}