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
    vector<ii> arr(n);
    fore(n){
        cin>>arr[i].f;
        arr[i].s=i;
    }
    sort(arr.begin(), arr.end());
    int ans=0;
    for(int i=1; i<n;i++){
        if(arr[i-1].s> arr[i].s  ){
            ans++;
        }
    }
    cout<<ans+1<<endl;
    return 0;
}