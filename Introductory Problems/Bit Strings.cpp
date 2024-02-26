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

const int mod = 1e9+7;

int main()
{
    int n;
    ll ans=1;
    cin>>n;
    for(int i=0; i<n; i++){
        ans*= 2%mod;
        ans=ans%mod;    
    }
    ans=ans%mod;
    cout<<ans<<endl;
    return 0;
}