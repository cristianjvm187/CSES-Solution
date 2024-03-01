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
    vii arr(n);
    fore(n){
        cin>>arr[i].s>>arr[i].f;
    }
    sort(arr.begin(),arr.end());
    int ans=1;
    int aux=arr[0].f;
    for(int i=1; i<n; i++){
        if(arr[i].s>= aux)
        {
            ans++;
            aux=arr[i].f;
        }
    }
    cout<<ans<<endl;
    return 0;
}