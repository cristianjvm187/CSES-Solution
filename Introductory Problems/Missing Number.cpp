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
    ll n, ai, ans=0, val;
    cin>>n;
    val= (n)*(n+1)/2;
    fore(n-1){
        cin>>ai;
        ans+=ai;
    }
    cout<<val-ans<<endl;
    return 0;
}