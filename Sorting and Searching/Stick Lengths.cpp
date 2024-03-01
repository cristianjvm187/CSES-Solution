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
    vi A(n);
    fore(n)
    {
        cin>>A[i];
    }
    sort(A.begin(),A.end());
    int m=A[n/2];
    ll ans=0;
    fore(n)
    {
        ans+=1LL*abs(A[i]-m);
    }
    cout<<ans<<endl;
    return 0;
}