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
    int r=-1,k=5;
    int ans=0;
    while( r!=0){
        r=n/k;
        ans+=r;
        k*=5;
    }
    cout<<ans<<endl;
    return 0;
}